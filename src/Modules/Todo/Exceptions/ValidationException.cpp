/*
 * ValidationException.cpp
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#include "ValidationException.h"

ValidationException::ValidationException(string message) {
	this->message = message;
}

string ValidationException::getMessage() {
	return message;
}

ValidationException::~ValidationException() {
	// TODO Auto-generated destructor stub
}

