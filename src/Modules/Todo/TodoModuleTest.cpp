/*
 * TodoModuleTest.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "TodoModuleTest.h"

TodoModuleTest::TodoModuleTest() {

}

void TodoModuleTest::runTests() {
	ItemTest* itemTest = new ItemTest();
	itemTest->runTests();
	delete itemTest;

	ExceptionTest* exceptionTest = new ExceptionTest();
	exceptionTest->runTests();
	delete exceptionTest;

	ListTest* listTest = new ListTest();
	listTest->runTests();
	delete listTest;

	NotFoundExceptionTest* notFoundExceptionTest = new NotFoundExceptionTest();
	notFoundExceptionTest->runTests();
	delete notFoundExceptionTest;
}

TodoModuleTest::~TodoModuleTest() {

}

