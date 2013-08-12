/*
 * ItemTest.h
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#ifndef ITEMTEST_H_
#define ITEMTEST_H_

#include "../../Models/Item.h"
#include <assert.h>

using namespace std;

/**
 * This class holds
 * all the tests for an Item
 */
class ItemTest {

public:

	ItemTest();

	/**
	 * This method run all the tests within
	 * this class
	 */
	void runTests();

	void testConstructor();

	void testSetters();

	void testEqualityOperatorWhenIdsAreTheSame();

	void testEqualityOperatorWhenIdsAreDifferent();

	virtual ~ItemTest();
};

#endif /* ITEMTEST_H_ */
