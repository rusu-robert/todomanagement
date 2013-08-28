/*
 * ListValidator.h
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#ifndef LISTVALIDATOR_H_
#define LISTVALIDATOR_H_

#include "../../Exceptions/ValidationException.h"
#include <iostream>

using namespace std;

class ListValidator {

public:

	ListValidator();

	void validate(string listName) throw (ValidationException);

	virtual ~ListValidator();
};

#endif /* LISTVALIDATOR_H_ */
