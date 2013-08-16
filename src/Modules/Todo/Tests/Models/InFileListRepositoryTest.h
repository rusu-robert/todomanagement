/*
 * InFileListRepositoryTest.h
 *
 *  Created on: 16.08.2013
 *      Author: Patri
 */

#ifndef INFILELISTREPOSITORYTEST_H_
#define INFILELISTREPOSITORYTEST_H_

#include <assert.h>
#include "../../Models/InFileListRepository.h"

class InFileListRepositoryTest {

public:

	InFileListRepositoryTest();

	void runTests();

	void testConstructorWithParameters();

	void testAdd();

	void testEdit();

	void testDelete();

	virtual ~InFileListRepositoryTest();
};

#endif /* INFILELISTREPOSITORYTEST_H_ */
