/*
 * NotFoundExceptionTest.cpp
 *
 *  Created on: 14.08.2013
 *      Author: Patri
 */

#include "NotFoundExceptionTest.h"

NotFoundExceptionTest::NotFoundExceptionTest() {
	// TODO Auto-generated constructor stub
}

void NotFoundExceptionTest::runTests() {
	this->testConstructor();
	cout<<"NotFoundExceptionTest::testConstructor OK"<<endl;
}

void NotFoundExceptionTest::testConstructor() {
	NotFoundException* notFoundException = new NotFoundException("Not found!");
	assert(notFoundException->getMessage() == "Not found!");
	delete notFoundException;
}

NotFoundExceptionTest::~NotFoundExceptionTest() {
	// TODO Auto-generated destructor stub
}

