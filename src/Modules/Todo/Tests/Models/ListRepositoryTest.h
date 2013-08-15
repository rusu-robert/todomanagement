/*
 * ListRepositoryTest.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Robert
 */

#ifndef LISTREPOSITORYTEST_H_
#define LISTREPOSITORYTEST_H_

#include <assert.h>
#include "../../Models/ListRepository.h"

class ListRepositoryTest {

private:
	void testAdd();

	void testFindById();

	void testFindByIdThrowsNotFoundException();

	void testEdit();

	void testDeleteList();

	void testGetNumberOfLists();

public:

	ListRepositoryTest();

	void runTests();

	virtual ~ListRepositoryTest();
};

#endif /* LISTREPOSITORYTEST_H_ */
