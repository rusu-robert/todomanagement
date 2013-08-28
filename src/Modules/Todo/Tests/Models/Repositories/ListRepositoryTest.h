/*
 * ListRepositoryTest.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Robert
 */

#ifndef LISTREPOSITORYTEST_H_
#define LISTREPOSITORYTEST_H_

#include <assert.h>
#include "../../../Models/Repositories/ListRepository.h"

class ListRepositoryTest {

private:

	void testAdd();

	void testFindById();

	void testFindByIdThrowsNotFoundException();

	void testEdit();

	void testEditThrowsNotFoundException();

	void testRemove();

	void testGetNumberOfLists();

	void testGetLists();

public:

	ListRepositoryTest();

	void runTests();

	virtual ~ListRepositoryTest();
};

#endif /* LISTREPOSITORYTEST_H_ */
