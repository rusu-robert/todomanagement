/*
 * app.cpp
 *
 *  Created on: Aug 11, 2013
 *      Author: Robert
 */

#include <iostream>
using namespace std;

#include "../src/Modules/ApplicationTest.h"
#include <sstream>  //include this to use string streams
 #include <string>

void runTests() {
	ApplicationTest* applicationTest = new ApplicationTest();
	applicationTest->runTests();
	delete applicationTest;
}

int main() {
	int number = 1234;

	    std::ostringstream ostr; //output string stream
	    ostr << number; //use the string stream just like cout,
	    //except the stream prints not to stdout but to a string.

	    std::string theNumberString = ostr.str();
	runTests();
	return 0;
}


