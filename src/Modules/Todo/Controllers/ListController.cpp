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
		List* list = (*lists)[i];
		vector<Item*>* items = list->getItems();
		for(int j=0; j<items->size(); j++) {
			Item* item = (*items)[j];
			if (item->getId() > nextId) {
				nextId = item->getId();
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

void ListController::addItem(int idList, string name, string description, bool isCompleted) throw (NotFoundException, ValidationException) {
	ItemValidator* itemValidator = new ItemValidator();
	itemValidator->validate(name);
	List* list = this->listRepository->findById(idList);
	list->addItem(generateIdForItem(), name, description, isCompleted);
	delete itemValidator;
}

void ListController::editItem(int idList, int idItem, string name, string description, bool isCompleted) throw (NotFoundException, ValidationException) {
	ItemValidator* itemValidator = new ItemValidator();
	itemValidator->validate(name);
	Item* item = this->listRepository->findById(idList)->findItemById(idItem);
	item->setName(name);
	item->setDescription(description);
	item->setIsCompleted(isCompleted);
	delete itemValidator;
}

void ListController::removeItem(int idList, int idItem) throw (NotFoundException) {
	this->listRepository->findById(idList)->deleteItem(idItem);
}

vector<List*>* ListController::getLists() {
	return this->listRepository->getLists();
}

List* ListController::getTheListInWhichItemByGivenIdExists(int id)  throw (NotFoundException) {
	vector<List*>* lists = this->getLists();
	for(int i = 0; i < lists->size(); i++) {
		List* list = (*lists)[i];
		vector<Item*>* items = list->getItems();
		for(int j = 0; j < items->size(); j++) {
			Item* item = (*items)[j];
			if (item->getId() == id) {
				return list;
				break;
			}
		}
	}
	throw NotFoundException("Item with given id does not exist");
}

List* ListController::findById(int id ) {
	return this->listRepository->findById(id);
}

ListController::~ListController() {
	// TODO Auto-generated destructor stub
}

