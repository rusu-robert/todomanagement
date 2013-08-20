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
	List* list = new List(1, "");
	ListValidator* listValidator = new ListValidator();
	try{
	listValidator->validate(list->getName());
	} catch(ValidationException &exception) {
		assert(true);
	}
	delete listValidator;
	delete list;
}

void ListValidatorTest::runTests() {
	this->testValidate();
	cout<<"ListValidatorTest::testValidate OK"<<endl;

}

ListValidatorTest::~ListValidatorTest() {
	// TODO Auto-generated destructor stub
}

