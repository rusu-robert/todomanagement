/*
 * CorruptDataException.cpp
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#include "CorruptDataException.h"

CorruptDataException::CorruptDataException(string message) {
	this->message = message;
}

string CorruptDataException::getMessage() {
	return message;
}

CorruptDataException::~CorruptDataException() {
	// TODO Auto-generated destructor stub
}

