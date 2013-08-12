/*
 * ExceptionTest.cpp
 *
 *  Created on: 12.08.2013
 *      Author: Patri
 */

#include "ExceptionTest.h"

ExceptionTest::ExceptionTest() {
	cout<<"ExceptionTest started"<<endl;
}

void ExceptionTest::runTests() {
	this->testConstructor();
	cout<<"ExceptionTest::testConstructor OK"<<endl;
}

void ExceptionTest::testConstructor() {
	Exception* exception = new Exception("Invalid position!");
	assert(exception->getMessage() == "Invalid position!");
	delete exception;
}

ExceptionTest::~ExceptionTest() {
	cout<<"ExceptionTest ran all test succesfully"<<endl;
}

