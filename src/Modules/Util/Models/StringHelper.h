/*
 * StringHelper.h
 *
 *  Created on: Aug 26, 2013
 *      Author: Robert
 */

#ifndef STRINGHELPER_H_
#define STRINGHELPER_H_

#include <string>
#include <vector>

using namespace std;

class StringHelper {
public:
	StringHelper();

	static vector<string> explode(const string& stringToBeExploded, const char& separator);

	virtual ~StringHelper();
};

#endif /* STRINGHELPER_H_ */
