/*
 * NotFoundException.h
 *
 *  Created on: 14.08.2013
 *      Author: Patri
 */

#ifndef NOTFOUNDEXCEPTION_H_
#define NOTFOUNDEXCEPTION_H_

#include<iostream>
#include<string>
#include "Exception.h"

using namespace std;

class NotFoundException : public Exception {

private:

	string message;

public:

	NotFoundException(string message);

	string getMessage();

	~NotFoundException();
};

#endif /* NOTFOUNDEXCEPTION_H_ */
