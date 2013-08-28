/*
 * ItemValidatorTest.cpp
 *
 *  Created on: 22.08.2013
 *      Author: Patri
 */

#include "ItemValidatorTest.h"

ItemValidatorTest::ItemValidatorTest() {
	// TODO Auto-generated constructor stub

}

void ItemValidatorTest::testValidate() {
	ItemValidator* itemValidator = new ItemValidator();
	try{
		itemValidator->validate("");
		assert(false);
		} catch(ValidationException &exception) {
			assert(true);
		}
	delete itemValidator;
}

void ItemValidatorTest::testWithValidData() {
	ItemValidator* itemValidator = new ItemValidator();
		try{
			itemValidator->validate("validData");
		} catch(ValidationException &exception) {
			assert(false);
		}
		delete itemValidator;
	}

void ItemValidatorTest::runTests() {
	this->testValidate();
	cout<<"ItemValidatorTest::testValidate OK"<<endl;

	this->testWithValidData();
	cout<<"ItemValidatorTest::testWithValidData OK"<<endl;
}

ItemValidatorTest::~ItemValidatorTest() {
	// TODO Auto-generated destructor stub
}

