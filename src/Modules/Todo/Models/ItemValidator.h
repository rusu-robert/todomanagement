/*
 * ItemValidator.h
 *
 *  Created on: 22.08.2013
 *      Author: Patri
 */

#ifndef ITEMVALIDATOR_H_
#define ITEMVALIDATOR_H_

#include "../Exceptions/ValidationException.h"
#include <iostream>

using namespace std;


class ItemValidator {

public:

	ItemValidator();

	void validate(string itemName) throw (ValidationException);

	virtual ~ItemValidator();
};

#endif /* ITEMVALIDATOR_H_ */
