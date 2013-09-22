/*
 * ListController.h
 *
 *  Created on: Aug 20, 2013
 *      Author: Robert
 */

#ifndef LISTCONTROLLER_H_
#define LISTCONTROLLER_H_

#include "../Models/Repositories/AbstractListRepository.h"
#include "../Models/Validators/ListValidator.h"
#include "../Models/Validators/ItemValidator.h"

#include <iostream>
#include <fstream>
using namespace std;


class ListController {

private:

	AbstractListRepository* listRepository;

	int generateId();

	int generateIdForItem();

public:

	ListController(AbstractListRepository* listRepository);

	void remove(int id) throw (NotFoundException);

	void add(string name) throw (ValidationException);

	void edit(int id, string name) throw (NotFoundException, ValidationException);

	void addItem(int idList, string name, string description, bool isCompleted) throw (NotFoundException, ValidationException);

	void editItem(int idList, int idItem, string name, string description, bool isCompleted) throw (NotFoundException, ValidationException);

	void removeItem(int idList, int idItem) throw (NotFoundException);

	List* getTheListInWhichItemByGivenIdExists(int id) throw (NotFoundException);

	List* findById(int id);

	vector<List*>* getLists();

	virtual ~ListController();
};

#endif /* LISTCONTROLLER_H_ */
