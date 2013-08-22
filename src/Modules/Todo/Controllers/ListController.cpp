/*
 * ListController.cpp
 *
 *  Created on: Aug 20, 2013
 *      Author: Robert
 */

#include "ListController.h"

int ListController::generateId() {
	int nextId = 0;
	vector<List*>* lists = this->listRepository->getLists();
	for (int i=0; i<lists->size(); i++) {
		if ((*lists)[i]->getId() > nextId) {
			nextId = (*lists)[i]->getId();
		}
	}

	return nextId + 1;
}

int ListController::generateIdForItem() {
	int nextId = 0;
	vector<List*>* lists = this->listRepository->getLists();
	for (int i=0; i<lists->size(); i++) {
		vector<Item*>* items = (*lists)[i]->getItems();
		for(int j=0; j<items->size(); j++) {
			if ((*items)[i]->getId() > nextId) {
				nextId = (*items)[i]->getId();
			}
		}
	}

	return nextId + 1;
}

ListController::ListController(AbstractListRepository* listRepository) {
	this->listRepository = listRepository;
}

void ListController::remove(int id) throw (NotFoundException) {
	this->listRepository->remove(id);
}

void ListController::add(string name) throw (ValidationException) {
	ListValidator* listValidator = new ListValidator();
	listValidator->validate(name);
	this->listRepository->add(generateId(), name);
	delete listValidator;
}

void ListController::edit(int id, string name) throw (NotFoundException,ValidationException) {
	ListValidator* listValidator = new ListValidator();
	listValidator->validate(name);
	this->listRepository->edit(id, name);
	delete listValidator;
}

void ListController::addItem(int idList, string name, string description, bool isCompleted) throw (NotFoundException) {
	ItemValidator* itemValidator = new ItemValidator();
	itemValidator->validate(name);
	this->listRepository->findById(idList)->addItem(generateIdForItem(), name, description, isCompleted);
	delete itemValidator;
}

void ListController::editItem(int idList, int idItem, string name, string description, bool isCompleted) throw (NotFoundException) {
	ItemValidator* itemValidator = new ItemValidator();
	itemValidator->validate(name);
	this->listRepository->findById(idList)->findItemById(idItem)->setName(name);
	this->listRepository->findById(idList)->findItemById(idItem)->setDescription(description);
	this->listRepository->findById(idList)->findItemById(idItem)->setIsCompleted(isCompleted);
	delete itemValidator;
}

ListController::~ListController() {
	// TODO Auto-generated destructor stub
}

