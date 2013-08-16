/*
 * InFileListRepositoryTest.cpp
 *
 *  Created on: 16.08.2013
 *      Author: Patri
 */

#include "InFileListRepositoryTest.h"

InFileListRepositoryTest::InFileListRepositoryTest() {
	// TODO Auto-generated constructor stub

}

void InFileListRepositoryTest::runTests() {
	this->testConstructorWithParameters();
	cout<<"InFileListRepositoryTest::testConstructorWithParameters OK"<<endl;

	this->testAdd();
	cout<<"InFileListRepositoryTest::testAdd OK"<<endl;

	this->testEdit();
	cout<<"InFileListRepositoryTest::testEdit OK"<<endl;

	this->testDelete();
	cout<<"InFileListRepositoryTest::testDelete OK"<<endl;

}

void InFileListRepositoryTest::testConstructorWithParameters() {
	InFileListRepository* inFileListRepository = new InFileListRepository("name");
	assert(inFileListRepository->getFileName() == "name");
	delete inFileListRepository;
}

void InFileListRepositoryTest::testAdd() {
	InFileListRepository* inFileListRepository = new InFileListRepository("fileName");
	List* list = new List(1, "listName");
	inFileListRepository->add(list);
	assert(inFileListRepository->getNumberOfLists() == 1 );
	delete list;
	delete inFileListRepository;
}

void InFileListRepositoryTest::testEdit() {
	InFileListRepository* inFileListRepository = new InFileListRepository("fileName");
	List* list = new List(1, "listName");
	inFileListRepository->add(list);
	inFileListRepository->edit(list, "modifiedName");
	assert(inFileListRepository->findById(1)->getName() == "modifiedName" );
	delete list;
	delete inFileListRepository;
}

void InFileListRepositoryTest::testDelete() {
	InFileListRepository* inFileListRepository = new InFileListRepository("fileName");
	List* firstList = new List(1, "firstListName");
	List* secondList = new List(2, "secondListName");
	inFileListRepository->add(firstList);
	inFileListRepository->add(secondList);
	inFileListRepository->deleteList(firstList);
	assert(inFileListRepository->getNumberOfLists() == 1 );
	delete secondList;
	delete firstList;
	delete inFileListRepository;
}

InFileListRepositoryTest::~InFileListRepositoryTest() {
	// TODO Auto-generated destructor stub
}

