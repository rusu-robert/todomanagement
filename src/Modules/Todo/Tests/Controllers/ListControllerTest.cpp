/*
 * ListControllerTest.cpp
 *
 *  Created on: 21.08.2013
 *      Author: Patri
 */

#include "ListControllerTest.h"

ListControllerTest::ListControllerTest() {
	// TODO Auto-generated constructor stub

}

void ListControllerTest::testRemove() {
	ListRepository* listRepository = new ListRepository();
	listRepository->add(1, "first name");
	listRepository->add(2, "second name");
	ListController* listController = new ListController(listRepository);
	listController->remove(1);
	assert(listRepository->getNumberOfLists() == 1);
	delete listController;
	delete listRepository;
}

void ListControllerTest::testAddWithValidData() {
	ListRepository* listRepository = new ListRepository();
	listRepository->add(1, "first name");
	listRepository->add(2, "second name");
	ListController* listController = new ListController(listRepository);
	listController->add("name");
	assert(listRepository->getNumberOfLists() == 3);
	delete listController;
	delete listRepository;
}

void ListControllerTest::testAddWithInvalidData() {
	ListRepository* listRepository = new ListRepository();
	listRepository->add(1, "first name");
	listRepository->add(2, "second name");
	ListController* listController = new ListController(listRepository);
	try{
			listController->add("");
		} catch(ValidationException &exception) {
			assert(true);
		}
	delete listController;
	delete listRepository;
	}

void ListControllerTest::runTests() {
	this->testRemove();
	cout<<"ListControllerTest::testRemove OK"<<endl;

	this->testAddWithValidData();
	cout<<"ListControllerTest::testAddWithValidData OK"<<endl;

	this->testAddWithInvalidData();
	cout<<"ListControlleTest::testAddWithInvalidData OK"<<endl;
}

ListControllerTest::~ListControllerTest() {
	// TODO Auto-generated destructor stub
}

