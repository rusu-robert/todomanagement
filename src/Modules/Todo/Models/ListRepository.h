/*
 * ListRepository.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Robert
 */

#ifndef LISTREPOSITORY_H_
#define LISTREPOSITORY_H_

#include <iostream>
#include <vector>
#include "Item.h"
#include "../Exceptions/NotFoundException.h"
#include "List.h"
#include "AbstractListRepository.h"

using namespace std;

class ListRepository : public AbstractListRepository{

private:
	vector<List*>* lists;

public:
	ListRepository();

	void add(int id, string name);

	List* findById(int id)  throw (NotFoundException);

	virtual ~ListRepository();
};

#endif /* LISTREPOSITORY_H_ */
