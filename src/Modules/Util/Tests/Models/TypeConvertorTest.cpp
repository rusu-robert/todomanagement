/*
 * TypeConvertorTest.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "TypeConvertorTest.h"

TypeConvertorTest::TypeConvertorTest() {
	// TODO Auto-generated constructor stub

}

void TypeConvertorTest::runTests() {
	this->testConvertIntToString();
	cout<<"TypeConvertorTest::testConvertIntToString OK"<<endl;
}

void TypeConvertorTest::testConvertIntToString() {
	assert(TypeConvertor::convertIntToString(1234) == "1234");
}

TypeConvertorTest::~TypeConvertorTest() {
	// TODO Auto-generated destructor stub
}

