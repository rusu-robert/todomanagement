/*
 * TypeConvertor.cpp
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#include "TypeConvertor.h"

TypeConvertor::TypeConvertor() {
	// TODO Auto-generated constructor stub

}

string TypeConvertor::convertIntToString(int number) {
	ostringstream ostr;
	ostr<<number;
	string theNumberString = ostr.str();
	return theNumberString;
}

TypeConvertor::~TypeConvertor() {
	// TODO Auto-generated destructor stub
}

