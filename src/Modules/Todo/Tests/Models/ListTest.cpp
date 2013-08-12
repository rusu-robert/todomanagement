/*
 * ListTest.cpp
 *
 *  Created on: 12.08.2013
 *      Author: Patri
 */

#include "ListTest.h"
#include "../../Models/Item.h"

ListTest::ListTest() {
	// TODO Auto-generated constructor stub
}

void ListTest::runTests() {
	this->testSettersAndGetters();
	cout<<"ListTest::testSettersAndGetters OK"<<endl;

	this->testConnstructorWithParameters();
	cout<<"ListTest::testConnstructorWithParameters OK"<<endl;

	this->testAddItem();
	cout<<"ListTest::testAddItem OK"<<endl;
}
void ListTest::testSettersAndGetters() {
	List list = List();
	list.setId(12);
	list.setName("listName");

	assert(list.getId() == 12);
	assert(list.getName() == "listName");
}

void ListTest::testConnstructorWithParameters() {
	List* list = new List(1, "name");

	assert(list->getId() == 1);
	assert(list->getName() == "name");
	assert(list->getNumberOfItems() == 0);
	delete list;
}

void ListTest::testAddItem() {
	List* list = new List(1, "name");
	list->addItem(1, "name", "description", true);
	assert(list->getNumberOfItems() == 1);
	delete list;
}

ListTest::~ListTest() {
	// TODO Auto-generated destructor stub
}

