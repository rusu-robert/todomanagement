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

void ListRepositoryTest::testEdit() {
	ListRepository* repository = new ListRepository();
	repository->add(1, "firstList");
	repository->add(2, "secondList");
	repository->add(3, "thirdList");
	repository->edit(2, "modifiedName");
	assert(repository->findById(2)->getName() == "modifiedName");
	delete repository;
}

void ListRepositoryTest::testEditThrowsNotFoundException() {
	ListRepository* repository = new ListRepository();
	try{
		repository->edit(1, "modifiedName");
	} catch(NotFoundException &exception) {
		assert(true);
	}
	delete repository;
}

void ListRepositoryTest::testDeleteList() {
	ListRepository* repository = new ListRepository();
	repository->add(1, "firstList");
	repository->add(2, "secondList");
	repository->add(3, "thirdList");
	repository->deleteList(2);
	assert(repository->getNumberOfLists() == 2);
	delete repository;
}

void ListRepositoryTest::testGetNumberOfLists() {
	ListRepository* repository = new ListRepository();
	repository->add(1, "firstList");
	repository->add(2, "secondList");
	repository->add(3, "thirdList");
	assert(repository->getNumberOfLists() == 3);
	delete repository;
}

void ListRepositoryTest::testGetLists() {
	ListRepository* repository = new ListRepository();
	repository->add(1, "firstList");
	repository->add(2, "secondList");
	repository->add(3, "thirdList");
	assert(repository->getLists()->size() == 3);
	delete repository;
}

void ListRepositoryTest::runTests() {
	this->testAdd();
	cout<<"ListRepositoryTest::testAdd OK"<<endl;

	this->testFindById();
	cout<<"ListRepositoryTest::testFindById"<<endl;

	this->testFindByIdThrowsNotFoundException();
	cout<<"ListRepositoryTest::testFindByIdThrowsNotFoundException"<<endl;

	this->testEdit();
	cout<<"ListRepositoryTest::testEdit OK"<<endl;

	this->testEditThrowsNotFoundException();
	cout<<"ListRepositoryTest::testEditTHrowsNotFoundException OK"<<endl;

	this->testGetNumberOfLists();
	cout<<"ListRepositoryTest::testGetNumberOfLists OK"<<endl;

	this->testDeleteList();
	cout<<"ListRepositoryTest::testDeleteList OK"<<endl;

	this->testGetLists();
	cout<<"ListRepositoryTest::testGetLists OK"<<endl;
}

ListRepositoryTest::~ListRepositoryTest() {
	// TODO Auto-generated destructor stub
}

