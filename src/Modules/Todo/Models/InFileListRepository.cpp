/*
 * InFileListRepository.cpp
 *
 *  Created on: 16.08.2013
 *      Author: Patri
 */

#include "InFileListRepository.h"

InFileListRepository::InFileListRepository(string fileName) {
	this->fileName = fileName;

}

string InFileListRepository::getFileName() {
	return this->fileName;
}

void InFileListRepository::add(int id, string name) throw (NotFoundException) {
	ListRepository::add(id, name);
}

void InFileListRepository::edit(int id, string name) throw (NotFoundException) {
	ListRepository::edit(id, name);
}

void InFileListRepository::deleteList(int id) throw (NotFoundException) {
	ListRepository::deleteList(id);
}

InFileListRepository::~InFileListRepository() {
	// TODO Auto-generated destructor stub
}

