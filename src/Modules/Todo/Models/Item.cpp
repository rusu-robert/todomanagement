/*
 * Item.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "Item.h"

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

Item::~Item() {
	// TODO Auto-generated destructor stub
}

