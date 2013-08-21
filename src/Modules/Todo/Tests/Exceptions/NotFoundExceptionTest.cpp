/*
 * NotFoundExceptionTest.cpp
 *
 *  Created on: 21.08.2013
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
	NotFoundException* notFoundException = new NotFoundException("Item not found!");
	assert(notFoundException->getMessage() == "Item not found!");
	delete notFoundException;
}

NotFoundExceptionTest::~NotFoundExceptionTest() {
	// TODO Auto-generated destructor stub
}

