/*
 * List.cpp
 *
 *  Created on: 11.08.2013
 *      Author: Patri
 */

#include "List.h"
#include "../../../Util/Models/TypeConvertor.h"

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

bool List::operator ==(List& list) {
	if(this->id == list.id){
		return true;
	}
	else{
		return false;
	}
}

void List::updateItem(int id, string name, string description, bool isCompleted) throw (NotFoundException) {
	int i = findPositionOfItemWithId(id);
	if(i == this->items->size()) {
		throw NotFoundException("The item with this id doesn't exist!");
	}
	else {
		(*this->items)[i]->setName(name);
		(*this->items)[i]->setDescription(description);
		(*this->items)[i]->setIsCompleted(isCompleted);
	}
}

Item* List::findItemById(int id) {
	int i = findPositionOfItemWithId(id);
	return (*this->items)[i];
}

void List::deleteItem(int id) {
	int i = findPositionOfItemWithId(id);
	(*this->items).erase(this->items->begin() + i);
}

int List::findPositionOfItemWithId(int id) {
	int i = 0;
	while(((*this->items)[i]->getId() != id) && (i != this->items->size())) {
		i++;
	}
	return i;
}

vector<Item*>* List::getItems() {
	return this->items;
}

List::~List() {
	for(int i=0; i<this->items->size(); i++) {
		delete (*this->items)[i];
	}
	delete this->items;
}

