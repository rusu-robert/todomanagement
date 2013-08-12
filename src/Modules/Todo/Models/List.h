/*
 * List.h
 *
 *  Created on: 11.08.2013
 *      Author: Patri
 */

#ifndef LIST_H_
#define LIST_H_

#include <vector>
#include <iostream>
#include "Item.h"

using namespace std;

class List {

private:

	int id;

	string name;

	vector<Item*> items;

public:

	List();

	int getId();

	void setId(int id);

	string getName();

	void setName(string name);

	virtual ~List();
};

#endif /* LIST_H_ */
