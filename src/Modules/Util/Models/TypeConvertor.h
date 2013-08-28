/*
 * TypeConvertor.h
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#ifndef TYPECONVERTOR_H_
#define TYPECONVERTOR_H_

#include <string>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;

class TypeConvertor {
public:
	TypeConvertor();

	/**
	 * http://stackoverflow.com/questions/5290089/how-to-convert-a-number-to-string-and-vice-versa-in-c
	 */
	static string convertIntToString(int number);

	static int convertStringToInt(string str);

	virtual ~TypeConvertor();
};

#endif /* TYPECONVERTOR_H_ */
