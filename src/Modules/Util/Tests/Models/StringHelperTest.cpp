/*
 * StringHelperTest.cpp
 *
 *  Created on: Aug 26, 2013
 *      Author: Robert
 */

#include "StringHelperTest.h"

StringHelperTest::StringHelperTest() {
	// TODO Auto-generated constructor stub

}

void StringHelperTest::runTests() {
	this->testExplode();
	cout<<"StringHelperTest::testExplode OK"<<endl;

	this->testExplodeWithEmptyStrings();
	cout<<"StringHelperTest::testExplodeWithEmptyStrings OK"<<endl;
}

void StringHelperTest::testExplode() {
	vector<string> pieces = StringHelper::explode("Some random string!", ' ');
	assert(pieces[0] == "Some");
	assert(pieces[1] == "random");
	assert(pieces[2] == "string!");
}

void StringHelperTest::testExplodeWithEmptyStrings() {
	vector<string> pieces = StringHelper::explode("Some;;random;string!", ';');
	assert(pieces[0] == "Some");
	assert(pieces[1] == "");
	assert(pieces[2] == "random");
	assert(pieces[3] == "string!");
}

StringHelperTest::~StringHelperTest() {
	// TODO Auto-generated destructor stub
}

