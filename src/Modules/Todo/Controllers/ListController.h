/*
 * ListController.h
 *
 *  Created on: Aug 20, 2013
 *      Author: Robert
 */

#ifndef LISTCONTROLLER_H_
#define LISTCONTROLLER_H_

#include "../Models/AbstractListRepository.h"

class ListController {

private:

	AbstractListRepository* listRepository;

	int generateId();

	int generateIdForItem();

public:

	ListController(AbstractListRepository* listRepository);

	void remove(int id) throw (NotFoundException);

	virtual ~ListController();
};

#endif /* LISTCONTROLLER_H_ */
