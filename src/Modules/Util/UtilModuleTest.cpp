/*
 * UtilModuleTest.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "UtilModuleTest.h"

UtilModuleTest::UtilModuleTest() {

}

void UtilModuleTest::runTests() {
	TypeConvertorTest* typeConvertorTest = new TypeConvertorTest();
	typeConvertorTest->runTests();
	delete typeConvertorTest;

	StringHelperTest* stringHelperTest = new StringHelperTest();
	stringHelperTest->runTests();
	delete stringHelperTest;
}

UtilModuleTest::~UtilModuleTest() {
	// TODO Auto-generated destructor stub
}

