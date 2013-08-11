/*
 * Exception.cpp
 *
 *  Created on: Aug 11, 2013
 *      Author: Robert
 */

#include "Exception.h"

Exception::Exception(string message) {
	this->message = message;
}

string Exception::getMessage() {
	return this->message;
}

Exception::~Exception() {
	// TODO Auto-generated destructor stub
}

