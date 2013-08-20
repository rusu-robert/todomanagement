/*
 * ValidationExceptionTest.cpp
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#include "ValidationExceptionTest.h"

ValidationExceptionTest::ValidationExceptionTest() {
	// TODO Auto-generated constructor stub

}

void ValidationExceptionTest::runTests() {
	this->testConstructor();
	cout<<"ValidationExceptionTest::testConstructor OK"<<endl;
}

void ValidationExceptionTest::testConstructor() {
	ValidationException* validationException = new ValidationException("Invalid data!");
	assert(validationException->getMessage() == "Invalid data!");
	delete validationException;
}

ValidationExceptionTest::~ValidationExceptionTest() {
	// TODO Auto-generated destructor stub
}

