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
	this->tableOfItems->setColumnCount(3);
	this->tableOfItems->setHorizontalHeaderLabels(QString("Name;Description;Is completed").split(";"));
	this->populateTableOfItems(firstList);
}

void MainWindow::populateTableOfItems(List* list) {
	vector<Item*>* items = list->getItems();
	this->tableOfItems->setRowCount(items->size());
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
	}
}

void MainWindow::initRightPart() {
	QVBoxLayout* rightLayout = new QVBoxLayout();
	QWidget* rightPart = new QWidget();
	initListsSelector();
	rightLayout->addWidget(this->listsSelector);
	rightPart->setLayout(rightLayout);

	this->mainLayout->addWidget(rightPart);

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

void MainWindow::alertMessage(string message) {
	QMessageBox messageBox;
	messageBox.setText(QString::fromStdString(message));
	messageBox.show();
}

MainWindow::~MainWindow()
{
	delete this->mainLayout;
}
