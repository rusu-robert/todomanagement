/*
 * TodoModuleTest.h
 *
 *  Created on: Aug 12, 2013
 *      Author: Robert
 */

#ifndef TODOMODULETEST_H_
#define TODOMODULETEST_H_

#include "Tests/Models//Entities/ItemTest.h"
#include "Tests/Exceptions/ExceptionTest.h"
#include "Tests/Exceptions/NotFoundExceptionTest.h"
#include "Tests/Exceptions/CorruptDataExceptionTest.h"
#include "Tests/Exceptions/ValidationExceptionTest.h"
#include "Tests/Models/Entities/ListTest.h"
#include "Tests/Models/Repositories/ListRepositoryTest.h"
#include "Tests/Models/Validators/ListValidatorTest.h"
#include "Tests/Models/Validators/ItemValidatorTest.h"
#include "Tests/Models/Repositories/InFileListRepositoryTest.h"
#include "Tests/Controllers/ListControllerTest.h"

/**
 * This class holds reference to all
 * test classes within this module
 */
class TodoModuleTest {

public:

	TodoModuleTest();

	/**
	 * This method runs all the
	 * tests within this module
	 */
	void runTests();

	virtual ~TodoModuleTest();
};

#endif /* TODOMODULETEST_H_ */
