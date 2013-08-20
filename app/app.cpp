/*
 * app.cpp
 *
 *  Created on: Aug 11, 2013
 *      Author: Robert
 */

#include <iostream>
using namespace std;

#include "../src/Modules/ApplicationTest.h"
#include <fstream>

void runTests() {
	ApplicationTest* applicationTest = new ApplicationTest();
	applicationTest->runTests();
	delete applicationTest;
}

int main() {
	runTests();
	return 0;
}


