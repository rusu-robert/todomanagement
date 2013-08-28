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
#include "../Entities/Item.h"
#include "../../Exceptions/NotFoundException.h"
#include "../Entities/List.h"
#include "AbstractListRepository.h"

using namespace std;

class ListRepository : public AbstractListRepository{

protected:
	vector<List*>* lists;

public:

	ListRepository();

	void add(int id, string name);

	List* findById(int id)  throw (NotFoundException);

	void edit(int id, string name) throw (NotFoundException);

	void remove(int id) throw (NotFoundException);

	int getNumberOfLists();

	vector<List*>* getLists();

	virtual ~ListRepository();
};

#endif /* LISTREPOSITORY_H_ */
