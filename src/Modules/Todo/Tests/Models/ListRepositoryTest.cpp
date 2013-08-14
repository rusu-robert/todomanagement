/*
 * ListRepositoryTest.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Robert
 */

#include "ListRepositoryTest.h"

ListRepositoryTest::ListRepositoryTest() {
	// TODO Auto-generated constructor stub

}

void ListRepositoryTest::testAdd() {
	ListRepository* repository = new ListRepository();
	repository->add(1, "some list");
	assert(repository->findById(1) != NULL);
	assert(repository->findById(1)->getName() == "some list");
	delete repository;
}

void ListRepositoryTest::testFindById() {
	ListRepository* repository = new ListRepository();
	repository->add(1, "some other list");
	repository->add(2, "another list");

	assert(repository->findById(2) != NULL);
	assert(repository->findById(2)->getName() == "another list");

	delete repository;
}

void ListRepositoryTest::testFindByIdThrowsNotFoundException() {
	ListRepository* repository = new ListRepository();
	try {
		repository->findById(1);
		assert(false);
	} catch(NotFoundException &exception) {
		assert(true);
	}
	delete repository;
}

void ListRepositoryTest::runTests() {
	this->testAdd();
	cout<<"ListRepositoryTest::testAdd OK"<<endl;

	this->testFindById();
	cout<<"ListRepositoryTest::testFindById"<<endl;

	this->testFindByIdThrowsNotFoundException();
	cout<<"ListRepositoryTest::testFindByIdThrowsNotFoundException"<<endl;
}

ListRepositoryTest::~ListRepositoryTest() {
	// TODO Auto-generated destructor stub
}

