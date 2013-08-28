/*
 * StringHelperTest.h
 *
 *  Created on: Aug 26, 2013
 *      Author: Robert
 */

#ifndef STRINGHELPERTEST_H_
#define STRINGHELPERTEST_H_

#include "../../Models/StringHelper.h"
#include <vector>
#include <assert.h>
#include <iostream>

using namespace std;

class StringHelperTest {
public:
	StringHelperTest();

	void testExplode();

	void testExplodeWithEmptyStrings();

	void runTests();

	virtual ~StringHelperTest();
};

#endif /* STRINGHELPERTEST_H_ */
