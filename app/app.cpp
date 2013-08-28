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

using namespace std;

void runTests() {
	ApplicationTest* applicationTest = new ApplicationTest();
	applicationTest->runTests();
	delete applicationTest;
}

int main(int argc, char *argv[]) {
	runTests();
	QApplication a(argc, argv);
	MainWindow window;
	window.show();
	return a.exec();
}


