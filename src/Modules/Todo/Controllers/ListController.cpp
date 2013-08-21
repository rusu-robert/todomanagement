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

ListController::~ListController() {
	// TODO Auto-generated destructor stub
}

