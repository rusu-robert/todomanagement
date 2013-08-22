/*
 * ItemValidator.cpp
 *
 *  Created on: 22.08.2013
 *      Author: Patri
 */

#include "ItemValidator.h"

ItemValidator::ItemValidator() {
	// TODO Auto-generated constructor stub

}

void ItemValidator::validate(string itemName) throw (ValidationException) {
	if((itemName == "") || (itemName.length() > 100)) {
		throw ValidationException("Invalid name!");
	}
}

ItemValidator::~ItemValidator() {
	// TODO Auto-generated destructor stub
}

