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

	this->testRemove();
	cout<<"InFileListRepositoryTest::testRemove OK"<<endl;

	this->testWriteInFile();
	cout<<"InFileListRepositoryTest::testWriteInFile OK"<<endl;

	this->testReadFromFile();
	cout<<"InFileListRepositoryTest::testReadFromFile OK"<<endl;
}

void InFileListRepositoryTest::testConstructorWithParameters() {
	InFileListRepository* inFileListRepository = new InFileListRepository("name");
	assert(inFileListRepository->getFileName() == "name");
	delete inFileListRepository;
}

void InFileListRepositoryTest::testAdd() {
	InFileListRepository* inFileListRepository = new InFileListRepository("fileName");
	List* list = new List(1, "listName");
	inFileListRepository->add(1, "listName");
	assert(inFileListRepository->getNumberOfLists() == 1 );
	unlink(inFileListRepository->getFileName().c_str());
	delete list;
	delete inFileListRepository;
}

void InFileListRepositoryTest::testEdit() {
	InFileListRepository* inFileListRepository = new InFileListRepository("fileName");
	List* list = new List(1, "listName");
	inFileListRepository->add(1, "listName");
	inFileListRepository->edit(1, "modifiedName");
	assert(inFileListRepository->findById(1)->getName() == "modifiedName" );
	unlink(inFileListRepository->getFileName().c_str());
	delete list;
	delete inFileListRepository;
}

void InFileListRepositoryTest::testRemove() {
	InFileListRepository* inFileListRepository = new InFileListRepository("fileName");
	List* firstList = new List(1, "firstListName");
	List* secondList = new List(2, "secondListName");
	inFileListRepository->add(1, "firstListName");
	inFileListRepository->add(2, "secondListName");
	inFileListRepository->remove(1);
	assert(inFileListRepository->getNumberOfLists() == 1 );
	unlink(inFileListRepository->getFileName().c_str());
	delete secondList;
	delete firstList;
	delete inFileListRepository;

}

void InFileListRepositoryTest::testWriteInFile() {
	InFileListRepository* inFileListRepository = new InFileListRepository("testWriteInFile.txt");
	inFileListRepository->add(1,"list name");
	List* list = inFileListRepository->findById(1);
	list->addItem(1, "name", "description", true);
	list->addItem(2, "another name", "another description", false);

	inFileListRepository->add(2, "another list");
	List* anotherList = inFileListRepository->findById(2);
	anotherList->addItem(3, "test", "", false);
	anotherList->addItem(4, "t", "d", true);

	inFileListRepository->writeInFile();
	ifstream fin(inFileListRepository->getFileName().c_str());
	if(fin) {
		char line[500];
		fin.getline(line, 500);
		assert(strcmp(line, "1;list name;1;name;description;1;2;another name;another description;0;") == 0);
		fin.getline(line, 500);
		assert(strcmp(line, "2;another list;3;test;;0;4;t;d;1;") == 0);
	} else {
		//it means that the file was not opened successfully
		assert(false);
	}
	fin.close();
	unlink(inFileListRepository->getFileName().c_str());
	delete inFileListRepository;

}

void InFileListRepositoryTest::testReadFromFile() {
	InFileListRepository* repository = new InFileListRepository("testReadFromFile.txt");
	fstream fout(repository->getFileName().c_str(), ios::out);
	List* firstList = new List(1, "name");
	firstList->addItem(1, "someName", "description", true);
	firstList->addItem(2, "randomname", "description", false);
	firstList->addItem(3, "aaan", "des", true);
	List* secondList = new List(2, "anotherName");
	fout<<firstList->toString()<<endl;
	fout<<secondList->toString()<<endl;
	fout.close();
	delete firstList;
	delete secondList;


	repository->readFromFile();
	List* firstListFound = repository->findById(1);
	assert(firstListFound->getName() == "name");
	assert(firstListFound->getNumberOfItems() == 3);

	unlink(repository->getFileName().c_str());
	delete repository;
}

InFileListRepositoryTest::~InFileListRepositoryTest() {
	// TODO Auto-generated destructor stub
}

