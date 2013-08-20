/*
 * CorruptDataExceptionTest.h
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#ifndef CORRUPTDATAEXCEPTIONTEST_H_
#define CORRUPTDATAEXCEPTIONTEST_H_

#include "../../Exceptions/CorruptDataException.h"
#include <assert.h>

using namespace std;

class CorruptDataExceptionTest {

public:

	CorruptDataExceptionTest();

	void runTests();

	void testConstructor();

	virtual ~CorruptDataExceptionTest();
};

#endif /* CORRUPTDATAEXCEPTIONTEST_H_ */
