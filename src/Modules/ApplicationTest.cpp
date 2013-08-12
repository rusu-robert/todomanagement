/*
 * ApplicationTest.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "ApplicationTest.h"

ApplicationTest::ApplicationTest() {
	cout<<"ApplicationTest started"<<endl;
}

void ApplicationTest::runTests() {
	TodoModuleTest* todoModuleTest = new TodoModuleTest();
	todoModuleTest->runTests();
	delete todoModuleTest;
}

ApplicationTest::~ApplicationTest() {
	cout<<"ApplicationTest ran all tests successfully"<<endl;
}

