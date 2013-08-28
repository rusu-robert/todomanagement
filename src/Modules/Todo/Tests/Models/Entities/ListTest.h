/*
 * ListTest.h
 *
 *  Created on: 12.08.2013
 *      Author: Patri
 */

#ifndef LISTTEST_H_
#define LISTTEST_H_

#include "../../../Models/Entities/List.h"
#include <assert.h>

using namespace std;

class ListTest {

public:

	ListTest();

	void runTests();

	void testSettersAndGetters();

	void testConnstructorWithParameters();

	void testAddItem();

	void testTostring();

	void testEqualityOperatorWhenIdsAreTheSame();

	void testEqualityOperatorWhenIdsAreDifferent();

	void testFindItemById();

	void testUpdateItem();

	void testDeleteItem();

	void testFindPositionOfItemWithId();

	void testGetItems();

	virtual ~ListTest();
};

#endif /* LISTTEST_H_ */
