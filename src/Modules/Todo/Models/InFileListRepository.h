/*
 * InFileListRepository.h
 *
 *  Created on: 16.08.2013
 *      Author: Patri
 */

#ifndef INFILELISTREPOSITORY_H_
#define INFILELISTREPOSITORY_H_

#include <string>
#include <iostream>
#include "ListRepository.h"

using namespace std;

class InFileListRepository : public ListRepository {

private:

	string fileName;

public:

	InFileListRepository(string fileName);

	string getFileName();

	void add(List* list) throw (NotFoundException);

	void edit(List* list, string name) throw (NotFoundException);

	void deleteList(List* list) throw (NotFoundException);

	virtual ~InFileListRepository();
};

#endif /* INFILELISTREPOSITORY_H_ */
