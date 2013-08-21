/*
 * NotFoundExceptionTest.h
 *
 *  Created on: 21.08.2013
 *      Author: Patri
 */

#ifndef NOTFOUNDEXCEPTIONTEST_H_
#define NOTFOUNDEXCEPTIONTEST_H_

#include "../../Exceptions/NotFoundException.h"
#include <assert.h>

using namespace std;


class NotFoundExceptionTest {

public:

	NotFoundExceptionTest();

	void runTests();

	void testConstructor();

	virtual ~NotFoundExceptionTest();
};

#endif /* NOTFOUNDEXCEPTIONTEST_H_ */
