/*
 * Item.h
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <iostream>
#include <string>

using namespace std;

class Item {

private:

	int id;

	string name;

	string description;

	bool isCompleted;

public:

	Item(int id, string name, string description, bool isCompleted);

	int getId();

	void setId(int id);

	string getName();

	void setName(string name);

	string getDescription();

	void setDescription(string description);

	bool getIsCompleted();

	void setIsCompleted(bool isCompleted);

	bool operator == (Item &newItem);

	virtual ~Item();
};

#endif /* ITEM_H_ */
