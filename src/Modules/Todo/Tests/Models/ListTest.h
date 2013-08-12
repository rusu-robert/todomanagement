/*
 * ListTest.h
 *
 *  Created on: 12.08.2013
 *      Author: Patri
 */

#ifndef LISTTEST_H_
#define LISTTEST_H_

#include "../../Models/List.h"
#include <assert.h>

using namespace std;

class ListTest {

public:

	ListTest();

	void runTests();

	void testSettersAndGetters();

	virtual ~ListTest();
};

#endif /* LISTTEST_H_ */
