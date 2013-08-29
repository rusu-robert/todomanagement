/*
 * app.cpp
 *
 *  Created on: Aug 11, 2013
 *      Author: Robert
 */

#include <iostream>
#include "../src/Modules/ApplicationTest.h"
#include <fstream>
#include <QtGui>
#include <QApplication>
#include "../src/Modules/Todo/Views/MainWindow.h"
#include "../src/Modules/Todo/Models/Repositories/InFileListRepository.h"
#include "../src/Modules/Todo/Controllers/ListController.h"

using namespace std;

void runTests() {
	ApplicationTest* applicationTest = new ApplicationTest();
	applicationTest->runTests();
	delete applicationTest;
}

int main(int argc, char *argv[]) {
	runTests();
	QApplication a(argc, argv);
	InFileListRepository* inFileListRepository = new InFileListRepository("database.txt");
	inFileListRepository->readFromFile();
	ListController* listController = new ListController(inFileListRepository);
	MainWindow* window = new MainWindow(listController);
	window->show();
	return a.exec();
}


