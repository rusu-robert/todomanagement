/*
 * InFileListRepositoryTest.h
 *
 *  Created on: 16.08.2013
 *      Author: Patri
 */

#ifndef INFILELISTREPOSITORYTEST_H_
#define INFILELISTREPOSITORYTEST_H_

#include <assert.h>
#include "../../../Models/Repositories/InFileListRepository.h"
#include <string.h>

using namespace std;

class InFileListRepositoryTest {

public:

	InFileListRepositoryTest();

	void runTests();

	void testConstructorWithParameters();

	void testAdd();

	void testEdit();

	void testRemove();

	void testWriteInFile();

	void testReadFromFile();

	virtual ~InFileListRepositoryTest();
};

#endif /* INFILELISTREPOSITORYTEST_H_ */
