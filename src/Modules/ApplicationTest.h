/*
 * ApplicationTest.h
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#ifndef APPLICATIONTEST_H_
#define APPLICATIONTEST_H_

#include "Todo/TodoModuleTest.h"
#include "Util/UtilModuleTest.h"

/**
 * This class holds reference to
 * test classes of each module
 */
class ApplicationTest {

public:
	ApplicationTest();

	/**
	 * This method starts the
	 * tests from all modules
	 */
	void runTests();

	virtual ~ApplicationTest();
};

#endif /* APPLICATIONTEST_H_ */
