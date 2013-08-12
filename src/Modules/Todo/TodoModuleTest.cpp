/*
 * TodoModuleTest.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "TodoModuleTest.h"

TodoModuleTest::TodoModuleTest() {
	cout<<"TodoModuleTest started"<<endl;
}

void TodoModuleTest::runTests() {
	ItemTest* itemTest = new ItemTest();
	itemTest->runTests();
	delete itemTest;

	ExceptionTest* exceptionTest = new ExceptionTest();
	exceptionTest->runTests();
	delete exceptionTest;
}

TodoModuleTest::~TodoModuleTest() {
	cout<<"TodoModuleTest ran all tests successfully"<<endl;
}

