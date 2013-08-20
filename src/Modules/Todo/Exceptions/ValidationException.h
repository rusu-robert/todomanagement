/*
 * ValidationException.h
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#ifndef VALIDATIONEXCEPTION_H_
#define VALIDATIONEXCEPTION_H_

#include<iostream>
#include<string>
#include "Exception.h"

using namespace std;

class ValidationException : public Exception {

private:
	string message;
public:

	ValidationException(string message);

	string getMessage();

	virtual ~ValidationException();
};

#endif /* VALIDATIONEXCEPTION_H_ */
