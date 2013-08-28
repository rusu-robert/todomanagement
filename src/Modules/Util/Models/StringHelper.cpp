/*
 * StringHelper.cpp
 *
 *  Created on: Aug 26, 2013
 *      Author: Robert
 */

#include "StringHelper.h"

StringHelper::StringHelper() {
	// TODO Auto-generated constructor stub

}

vector<string> StringHelper::explode(const string& stringToBeExploded, const char& separator) {
    string next;
    vector<string> result;

    // For each character in the string
    for (string::const_iterator it = stringToBeExploded.begin(); it != stringToBeExploded.end(); it++) {
        // If we've hit the terminal character
        if (*it == separator) {
        	result.push_back(next);
        	next.clear();
        } else {
            // Accumulate the next character into the sequence
            next += *it;
        }
    }
    if (!next.empty())
         result.push_back(next);
    return result;
}

StringHelper::~StringHelper() {
	// TODO Auto-generated destructor stub
}

