/*
 * ApplicationTest.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "ApplicationTest.h"

ApplicationTest::ApplicationTest() {

}

void ApplicationTest::runTests() {
	TodoModuleTest* todoModuleTest = new TodoModuleTest();
	todoModuleTest->runTests();
	delete todoModuleTest;

	UtilModuleTest* utilModuleTest = new UtilModuleTest();
	utilModuleTest->runTests();
	delete utilModuleTest;
}

ApplicationTest::~ApplicationTest() {

}

