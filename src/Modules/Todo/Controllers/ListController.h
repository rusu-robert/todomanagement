/*
 * ListController.h
 *
 *  Created on: Aug 20, 2013
 *      Author: Robert
 */

#ifndef LISTCONTROLLER_H_
#define LISTCONTROLLER_H_

#include "../Models/AbstractListRepository.h"
#include "../Models/ListValidator.h"

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

	virtual ~ListController();
};

#endif /* LISTCONTROLLER_H_ */
