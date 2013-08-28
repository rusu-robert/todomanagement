/*
 * ItemTest.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "ItemTest.h"

ItemTest::ItemTest() {

}

void ItemTest::runTests() {
	this->testConstructor();
	cout<<"ItemTest::testConstructor OK"<<endl;

	this->testSetters();
	cout<<"ItemTest::testSetters OK"<<endl;

	this->testToString();
	cout<<"ItemTest::testToString OK"<<endl;

	this->testEqualityOperatorWhenIdsAreTheSame();
	cout<<"ItemTest::testEqualityOperatorWhenIdsAreTheSame OK"<<endl;

	this->testEqualityOperatorWhenIdsAreDifferent();
	cout<<"ItemTest::testEqualityOperatorWhenIdsAreDifferent OK"<<endl;
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

void ItemTest::testEqualityOperatorWhenIdsAreTheSame() {
	Item* firstItem = new Item(1, "firstName", "firstDescription", true);
	Item* secondItem = new Item(1, "secondName", "secondDescription", false);
	assert((*firstItem) == (*secondItem));
	delete secondItem;
	delete firstItem;
}

void ItemTest::testEqualityOperatorWhenIdsAreDifferent() {
	Item* firstItem = new Item(1, "name", "description", true);
	Item* secondItem = new Item(2, "name", "description", true);
	assert(((*firstItem) == (*secondItem)) == false);
	delete secondItem;
	delete firstItem;
}

void ItemTest::testToString() {
	Item* item = new Item(1, "name", "description", true);
	assert(item->toString() == "1;name;description;1;");
	delete item;
}

ItemTest::~ItemTest() {

}

