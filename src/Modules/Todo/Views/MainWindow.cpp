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
	vector<List*>* lists = this->listController->getLists();
	List* firstList = lists->front();
	QTableWidget* table = new QTableWidget(firstList->getNumberOfItems(), 3);
	table->setHorizontalHeaderLabels(QString("Name;Description;IsCompleted").split(";"));

	QWidget* leftPart = new QWidget();
	leftPart->setLayout(leftLayout);
	leftLayout->addWidget(table);

	this->mainLayout->addWidget(leftPart);
}

void MainWindow::initRightPart() {
	QComboBox* listsSelector = new QComboBox();
	QVBoxLayout* rightLayout = new QVBoxLayout();
	vector<List*>* lists = this->listController->getLists();
	for(int i = 0; i < lists->size(); i++) {
		List* list = (*lists)[i];
		listsSelector->addItem(QString::fromStdString(list->getName()));
	}
	QObject::connect(listsSelector, SIGNAL(currentIndexChanged(int)), this, SLOT(selectedListChanged()));

	rightLayout->addWidget(listsSelector);
	QWidget* rightPart = new QWidget();
	rightPart->setLayout(rightLayout);


	this->mainLayout->addWidget(rightPart);

}

void MainWindow::selectedListChanged() {
	alertMessage("It works");
	cout<<"IT WORKS :X";
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
