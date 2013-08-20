/*
 * CorruptDataExceptionTest.cpp
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#include "CorruptDataExceptionTest.h"

CorruptDataExceptionTest::CorruptDataExceptionTest() {
	// TODO Auto-generated constructor stub

}
void CorruptDataExceptionTest::runTests() {

	this->testConstructor();
	cout<<"CorruptDataExceptionTest::testConstructor OK"<<endl;
}

void CorruptDataExceptionTest::testConstructor() {
	CorruptDataException* corruptDataException = new CorruptDataException("Corrupt Data!");
	assert(corruptDataException->getMessage() == "Corrupt Data!");
	delete corruptDataException;
}
CorruptDataExceptionTest::~CorruptDataExceptionTest() {
	// TODO Auto-generated destructor stub
}

