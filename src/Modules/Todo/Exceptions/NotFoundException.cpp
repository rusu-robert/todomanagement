/*
 * NotFoundException.cpp
 *
 *  Created on: 14.08.2013
 *      Author: Patri
 */

#include "NotFoundException.h"

NotFoundException::NotFoundException(string message) {
	this->message = message;
}

string NotFoundException::getMessage() {
	return this->message;
}

NotFoundException::~NotFoundException() {
	// TODO Auto-generated destructor stub
}

