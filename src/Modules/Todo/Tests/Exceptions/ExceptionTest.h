/*
 * ExceptionTest.h
 *
 *  Created on: 12.08.2013
 *      Author: Patri
 */

#ifndef EXCEPTIONTEST_H_
#define EXCEPTIONTEST_H_

#include "../../Exceptions/Exception.h"
#include <assert.h>

using namespace std;

/**
 * This class holds
 * all tests for an Exception
 */
class ExceptionTest {

public:

	ExceptionTest();

	void runTests();

	void testConstructor();

	virtual ~ExceptionTest();
};

#endif /* EXCEPTIONTEST_H_ */
