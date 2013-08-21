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
	delete listRepository;
	delete listController;
}

void ListControllerTest::runTests() {
	this->testRemove();
	cout<<"ListControllerTest::testRemove OK"<<endl;
}

ListControllerTest::~ListControllerTest() {
	// TODO Auto-generated destructor stub
}

