/*
 * ItemTest.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "ItemTest.h"

ItemTest::ItemTest() {
	cout<<"ItemTest started"<<endl;
}

void ItemTest::runTests() {
	this->testConstructor();
	cout<<"ItemTest::testConstructor OK"<<endl;

	this->testSetters();
	cout<<"ItemTest::testSetters OK"<<endl;
}

void ItemTest::testConstructor() {
	Item* item = new Item(1, "name", "description", false);
	assert(item->getId() == 1);
	assert(item->getName() == "name");
	assert(item->getDescription() == "description");
	assert(item->getIsCompleted() == false);
	delete item;
}

void ItemTest::testSetters() {
	Item* item = new Item(1, "name", "description", false);
	item->setId(2);
	item->setName("another name");
	item->setDescription("another description");
	item->setIsCompleted(true);

	assert(item->getId() == 2);
	assert(item->getName() == "another name");
	assert(item->getDescription() == "another description");
	assert(item->getIsCompleted() == true);

	delete item;
}


ItemTest::~ItemTest() {
	cout<<"ItemTest ran all tests successfully"<<endl;
}

