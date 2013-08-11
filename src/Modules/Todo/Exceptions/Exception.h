/*
 * Exception.h
 *
 *  Created on: Aug 11, 2013
 *      Author: Robert
 */

#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <iostream>
#include <string>

using namespace std;

class Exception {

private:
	string message;


public:

	Exception(string message);

	string getMessage();

	virtual ~Exception();
};

#endif /* EXCEPTION_H_ */
