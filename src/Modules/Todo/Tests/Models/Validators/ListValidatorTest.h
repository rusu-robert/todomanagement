/*
 * ListValidatorTest.h
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#ifndef LISTVALIDATORTEST_H_
#define LISTVALIDATORTEST_H_

#include "../../../Models/Validators/ListValidator.h"
#include "../../../Models/Entities/List.h"
#include <assert.h>

using namespace std;

class ListValidatorTest {

public:

	ListValidatorTest();

	void runTests();

	void testValidate();

	void testWithValidData();

	virtual ~ListValidatorTest();
};

#endif /* LISTVALIDATORTEST_H_ */
