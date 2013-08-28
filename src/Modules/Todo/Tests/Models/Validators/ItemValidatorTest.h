/*
 * ItemValidatorTest.h
 *
 *  Created on: 22.08.2013
 *      Author: Patri
 */

#ifndef ITEMVALIDATORTEST_H_
#define ITEMVALIDATORTEST_H_

#include "../../../Models/Validators/ItemValidator.h"
#include "../../../Models/Entities/Item.h"
#include <assert.h>

using namespace std;


class ItemValidatorTest {

public:

	ItemValidatorTest();

	void runTests();

	void testValidate();

	void testWithValidData();

	virtual ~ItemValidatorTest();
};

#endif /* ITEMVALIDATORTEST_H_ */
