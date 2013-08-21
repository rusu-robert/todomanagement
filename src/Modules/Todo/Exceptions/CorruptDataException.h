/*
 * CorruptDataException.h
 *
 *  Created on: 20.08.2013
 *      Author: Patri
 */

#ifndef CORRUPTDATAEXCEPTION_H_
#define CORRUPTDATAEXCEPTION_H_

#include<iostream>
#include<string>
#include "Exception.h"

using namespace std;

class CorruptDataException : public Exception {

	public:

		CorruptDataException(string message);

		virtual ~CorruptDataException();
};

#endif /* CORRUPTDATAEXCEPTION_H_ */
