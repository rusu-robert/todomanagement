#include "MainWindow.h"

MainWindow::MainWindow(ListController* listController, QWidget *parent) : QWidget(parent) {
	this->listController = listController;
	this->mainLayout = new QHBoxLayout();
	this->initLeftPart();
	this->initRightPart();
	this->setLayout(this->mainLayout);
}

void MainWindow::initLeftPart() {
	QVBoxLayout* leftLayout = new QVBoxLayout();

	QWidget* leftPart = new QWidget();
	leftPart->setLayout(leftLayout);
	initTableOfItems();
	leftLayout->addWidget(this->tableOfItems);

	this->mainLayout->addWidget(leftPart);
}

void MainWindow::initTableOfItems()  {
	vector<List*>* lists = this->listController->getLists();
	List* firstList = lists->front();
	this->tableOfItems = new QTableWidget();
	this->tableOfItems->setColumnCount(4);
	this->tableOfItems->setHorizontalHeaderLabels(QString("Name;Description;Is completed;Action").split(";"));
	this->populateTableOfItems(firstList);
}

void MainWindow::populateTableOfItems(List* list) {
	vector<Item*>* items = list->getItems();
	this->tableOfItems->setRowCount(items->size());
	this->signalMapper = new QSignalMapper(this);

	for(int i = 0; i < items->size(); i++) {
		Item* item = (*items)[i];
		QString itemName = QString::fromStdString(item->getName());
		QTableWidgetItem* nameCell = new QTableWidgetItem(itemName);
		this->tableOfItems->setItem(i, 0, nameCell);
		QString itemDescription = QString::fromStdString(item->getDescription());
		QTableWidgetItem* descriptionCell = new QTableWidgetItem(itemDescription);
		this->tableOfItems->setItem(i,1,descriptionCell);
		QString itemIsCompleted;
		if(item->getIsCompleted() == true) {
			itemIsCompleted = QString::fromStdString("Yes!");
		} else {
			itemIsCompleted = QString::fromStdString("Not!");
		}
		QTableWidgetItem* isCompletedCell = new QTableWidgetItem(itemIsCompleted);
		this->tableOfItems->setItem(i, 2, isCompletedCell);

		QPushButton* removeButton = new QPushButton("Remove");
		connect(removeButton, SIGNAL(clicked()), signalMapper, SLOT(map()));
		signalMapper->setMapping(removeButton, item->getId());
		this->tableOfItems->setCellWidget(i, 3, removeButton);
	}

	connect(signalMapper, SIGNAL(mapped(int)), this, SLOT(removeItem(int)));
}

void MainWindow::initRightPart() {
	QVBoxLayout* rightLayout = new QVBoxLayout();
	QWidget* rightPart = new QWidget();
	this->initListsSelector();
	rightLayout->addWidget(this->listsSelector);

	this->initItemForm();
	rightLayout->addWidget(this->itemForm);

	rightPart->setLayout(rightLayout);

	this->mainLayout->addWidget(rightPart);

}

void MainWindow::initItemForm() {
	this->itemFormNameLabel = new QLabel("Name: ");
	this->itemFormNameInput = new QLineEdit();
	this->itemFormNameLabel->setBuddy(this->itemFormNameInput);

	this->itemFormDescriptionLabel = new QLabel("Description: ");
	this->itemFormDescriptionInput = new QLineEdit();
	this->itemFormDescriptionLabel->setBuddy(this->itemFormDescriptionInput);

	this->addItemButton = new QPushButton("Add item");
	QObject::connect(this->addItemButton, SIGNAL(clicked()), this, SLOT(addItem()));

	this->itemFormIsCompleted = new QCheckBox("Is completed?");

	QGridLayout* gridLayout = new QGridLayout();

	gridLayout->addWidget(itemFormNameLabel, 0, 0);
	gridLayout->addWidget(itemFormNameInput, 0, 1);

	gridLayout->addWidget(itemFormDescriptionLabel, 1, 0);
	gridLayout->addWidget(itemFormDescriptionInput, 1, 1);

	gridLayout->addWidget(itemFormIsCompleted, 2, 0);

	gridLayout->addWidget(addItemButton, 3, 0);

	this->itemForm = new QWidget();
	this->itemForm->setLayout(gridLayout);
}

void MainWindow::initListsSelector() {
	this->listsSelector = new QComboBox();
	vector<List*>* lists = this->listController->getLists();
	for(int i = 0; i < lists->size(); i++) {
		List* list = (*lists)[i];
		this->listsSelector->addItem(QString::fromStdString(list->getName()), QVariant(list->getId()));
	}
	QObject::connect(this->listsSelector, SIGNAL(currentIndexChanged(int)), this, SLOT(selectedListChanged()));
}

void MainWindow::selectedListChanged() {
	int index = this->listsSelector->currentIndex();
	QString inputId = this->listsSelector->itemData(index).toString();
	int id = inputId.toInt();
	List* list = this->listController->findById(id);
	this->populateTableOfItems(list);
}

void MainWindow::clearFormItem() {
	itemFormNameInput->setText("");
	itemFormDescriptionInput->setText("");
	itemFormIsCompleted->setChecked(false);
}

void MainWindow::addItem() {
	QString inputName = itemFormNameInput->text();
	QString inputDescription = itemFormDescriptionInput->text();

	int listIndex = this->listsSelector->currentIndex();
	int listId  = this->listsSelector->itemData(listIndex).toInt();
	bool inputIsCompleted = this->itemFormIsCompleted->isChecked();
	try {
		listController->addItem(
						listId,
						inputName.toStdString(),
						inputDescription.toStdString(),
						inputIsCompleted
				);
		clearFormItem();
		populateTableOfItems(listController->findById(listId));
	}catch(Exception& exception) {
		this->alertMessage(exception.getMessage());
	}
}

void MainWindow::removeItem(int itemId) {
	List* list = this->listController->getTheListInWhichItemByGivenIdExists(itemId);
	list->deleteItem(itemId);
	this->populateTableOfItems(list);
}

void MainWindow::alertMessage(string message) {
	QMessageBox* alert = new QMessageBox();
	QString qMessage = QString::fromStdString(message);
	alert->setText(qMessage);
	alert->exec();
}

MainWindow::~MainWindow()
{
	delete this->mainLayout;
}
