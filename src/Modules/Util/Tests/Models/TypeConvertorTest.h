/*
 * TypeConvertorTest.h
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#ifndef TYPECONVERTORTEST_H_
#define TYPECONVERTORTEST_H_

#include <iostream>
#include "../../Models/TypeConvertor.h"
#include <assert.h>

using namespace std;

class TypeConvertorTest {

public:

	TypeConvertorTest();

	void runTests();

	void testConvertIntToString();

	virtual ~TypeConvertorTest();
};

#endif /* TYPECONVERTORTEST_H_ */
