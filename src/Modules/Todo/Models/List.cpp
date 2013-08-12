/*
 * List.cpp
 *
 *  Created on: 11.08.2013
 *      Author: Patri
 */

#include "List.h"

List::List() {

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

List::~List() {
	// TODO Auto-generated destructor stub
}

