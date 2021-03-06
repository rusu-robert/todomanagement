/*
 * ListControllerTest.h
 *
 *  Created on: 21.08.2013
 *      Author: Patri
 */

#ifndef LISTCONTROLLERTEST_H_
#define LISTCONTROLLERTEST_H_

#include "../../Controllers/ListController.h"
#include "../../Models/Repositories/ListRepository.h"
#include <assert.h>

using namespace std;


class ListControllerTest {

public:

	ListControllerTest();

	void runTests();

	void testRemove();

	void testAddWithValidData();

	void testAddWithInvalidData();

	void testEdit();

	void testAddItem();

	void testEditItem();

	void testRemoveItem();

	virtual ~ListControllerTest();
};

#endif /* LISTCONTROLLERTEST_H_ */
