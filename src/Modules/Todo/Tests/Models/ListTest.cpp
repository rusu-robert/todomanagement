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
}
void ListTest::testSettersAndGetters() {
	List list = List();
	list.setId(12);
	list.setName("listName");

	assert(list.getId() == 12);
	assert(list.getName() == "listName");
}

ListTest::~ListTest() {
	// TODO Auto-generated destructor stub
}

