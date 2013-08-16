/*
 * AbstractListRepository.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Robert
 */

#ifndef ABSTRACTLISTREPOSITORY_H_
#define ABSTRACTLISTREPOSITORY_H_

#include "../Exceptions/NotFoundException.h"
#include <string>
#include "../Models/List.h"

using namespace std;

class AbstractListRepository {

public:

	/**
	 * This method can be used to add a list
	 */
	virtual void add(int id, string name) = 0;

	/**
	 * This method can be used to find a list by an id
	 */
	virtual List* findById(int id) throw (NotFoundException) = 0;

	virtual void edit(int id, string name) = 0;

	virtual void deleteList(int id) = 0;

	virtual ~AbstractListRepository() {};
};

#endif /* ABSTRACTLISTREPOSITORY_H_ */
