/*
 * ListValidator.cpp
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#include "ListValidator.h"

ListValidator::ListValidator() {
	// TODO Auto-generated constructor stub

}

void ListValidator::validate(string listName) throw (ValidationException) {
	if(listName == "") {
		throw ValidationException("Invalid name!");
	}
}

ListValidator::~ListValidator() {
	// TODO Auto-generated destructor stub
}

