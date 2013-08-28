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
#include <fstream>
#include "ListRepository.h"
#include <string.h>
#include <stdlib.h>
#include "../../../Util/Models/StringHelper.h"
#include "../../../Util/Models/TypeConvertor.h"

using namespace std;

class InFileListRepository : public ListRepository {

private:

	string fileName;

public:

	InFileListRepository(string fileName);

	string getFileName();

	void add(int id, string name) throw (NotFoundException);

	void edit(int id, string name) throw (NotFoundException);

	void remove(int id) throw (NotFoundException);

	virtual ~InFileListRepository();

	void writeInFile();

	void readFromFile();

};

#endif /* INFILELISTREPOSITORY_H_ */
