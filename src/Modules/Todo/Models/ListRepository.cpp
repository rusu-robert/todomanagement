/*
 * ListRepository.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Robert
 */

#include "ListRepository.h"

ListRepository::ListRepository() {
	this->lists = new vector<List*>();
}

void ListRepository::add(int id, string name) {
	List* list = new List(id, name);
	this->lists->push_back(list);
}

List* ListRepository::findById(int id) throw (NotFoundException) {
	for(int i=0; i<this->lists->size(); i++) {
		if ((*this->lists)[i]->getId() == id) {
			return (*this->lists)[i];
		}
	}

	throw NotFoundException("List by given id doesn't exist!");
}

void ListRepository::edit(int id, string name) {
	findById(id)->setName(name);
}

ListRepository::~ListRepository() {
	for(int i=0; i<this->lists->size(); i++) {
		delete (*this->lists)[i];
	}
	delete this->lists;
}

