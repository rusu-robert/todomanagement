/*
 * List.cpp
 *
 *  Created on: 11.08.2013
 *      Author: Patri
 */

#include "List.h"
#include "../../Util/Models/TypeConvertor.h"

List::List() {
	this->id = NULL;
	this->name = "";
	this->items = new vector<Item*>();
}

List::List(int id, string name) {
	this->id = id;
	this->name = name;
	this->items = new vector<Item*>();
}

int List::getId() {
	return id;
}

void List::setId(int id) {
	this->id = id;
}

string List::getName() {
	return name;
}

void List::setName(string name) {
	this->name = name;
}

void List::addItem(int id, string name, string description, bool isCompleted) {
	this->items->push_back(new Item(id, name, description, isCompleted));
}

int List::getNumberOfItems() {
	return this->items->size();
}

string List::toString() {
	string listString;
	listString = TypeConvertor::convertIntToString(this->id);
	listString += ";" + this->name + ";";
	for(int i=0; i<this->items->size(); i++) {
		listString += (*this->items)[i]->toString();
	}
	return listString;
}

List::~List() {
	for(int i=0; i<this->items->size(); i++) {
		delete (*this->items)[i];
	}
	delete this->items;
}

