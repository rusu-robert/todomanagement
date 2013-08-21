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

	ListRepositoryTest* listRepositoryTest = new ListRepositoryTest();
	listRepositoryTest->runTests();
	delete listRepositoryTest;

	InFileListRepositoryTest* inFileListRepositoryTest = new InFileListRepositoryTest();
	inFileListRepositoryTest->runTests();
	delete inFileListRepositoryTest;

	CorruptDataExceptionTest* corruptDataExceptionTest = new CorruptDataExceptionTest();
	corruptDataExceptionTest->runTests();
	delete corruptDataExceptionTest;

	ValidationExceptionTest* validationExceptionTest = new ValidationExceptionTest();
	validationExceptionTest->runTests();
	delete validationExceptionTest;

	ListValidatorTest* listValidatorTest = new ListValidatorTest();
	listValidatorTest->runTests();
	delete listValidatorTest;

	ListControllerTest* listControllerTest = new ListControllerTest();
	listControllerTest->runTests();
	delete listControllerTest;
};


TodoModuleTest::~TodoModuleTest() {

}

