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

	void remove(int id);

public:

	ListController(AbstractListRepository* listRepository);

	virtual ~ListController();
};

#endif /* LISTCONTROLLER_H_ */
