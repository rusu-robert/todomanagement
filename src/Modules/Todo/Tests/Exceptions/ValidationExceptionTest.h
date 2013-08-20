/*
 * ValidationExceptionTest.h
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#ifndef VALIDATIONEXCEPTIONTEST_H_
#define VALIDATIONEXCEPTIONTEST_H_

#include "../../Exceptions/ValidationException.h"
#include <assert.h>

using namespace std;

class ValidationExceptionTest {

public:
	ValidationExceptionTest();

	void runTests();

	void testConstructor();

	virtual ~ValidationExceptionTest();
};

#endif /* VALIDATIONEXCEPTIONTEST_H_ */
