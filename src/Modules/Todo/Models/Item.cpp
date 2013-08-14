/*
 * Item.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "Item.h"
#include "../../Util/Models/TypeConvertor.h"

using namespace std;

Item::Item(int id, string name, string description, bool isCompleted) {
	this->id = id;
	this->name = name;
	this->description = description;
	this->isCompleted = isCompleted;
}

int Item::getId() {
	return this->id;
}

void Item::setId(int id) {
	this->id = id;
}

string Item::getName() {
	return this->name;
}

void Item::setName(string name) {
	this->name = name;
}

string Item::getDescription() {
	return this->description;
}

void Item::setDescription(string description) {
	this->description = description;
}

bool Item::getIsCompleted() {
	return this->isCompleted;
}

void Item::setIsCompleted(bool isCompleted) {
	this->isCompleted = isCompleted;
}

bool Item::operator == (Item& newItem) {
	if(this->id == newItem.id) {
		return true;
	}
	else {
		return false;
    }
}

string Item::toString() {
	string itemString;
	itemString = TypeConvertor::convertIntToString(this->id);
	itemString += ";" + this->name + ";" + this->description + ";";
	if(this->isCompleted == true) {
		itemString += "1;";
	}
	else {
		itemString += "0;";
	}
	return itemString;
}

Item::~Item() {
	// TODO Auto-generated destructor stub
}

