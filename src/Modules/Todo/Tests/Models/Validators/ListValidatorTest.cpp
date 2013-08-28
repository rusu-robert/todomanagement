/*
 * ListValidatorTest.cpp
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#include "ListValidatorTest.h"

ListValidatorTest::ListValidatorTest() {
	// TODO Auto-generated constructor stub

}

void ListValidatorTest::testValidate() {
	ListValidator* listValidator = new ListValidator();
	try{
	listValidator->validate("");
	assert(false);
	} catch(ValidationException &exception) {
		assert(true);
	}
	delete listValidator;
}

void ListValidatorTest::testWithValidData() {
	ListValidator* listValidator = new ListValidator();
	try{
		listValidator->validate("validData");
	} catch(ValidationException &exception) {
		assert(false);
	}
	delete listValidator;
}

void ListValidatorTest::runTests() {
	this->testValidate();
	cout<<"ListValidatorTest::testValidate OK"<<endl;

	this->testWithValidData();
	cout<<"ListValidatorTest::testWithValidData OK"<<endl;
}

ListValidatorTest::~ListValidatorTest() {
	// TODO Auto-generated destructor stub
}

