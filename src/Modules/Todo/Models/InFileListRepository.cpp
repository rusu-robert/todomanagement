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

void InFileListRepository::add(List* list) throw (NotFoundException) {
	ListRepository::add(list->getId(), list->getName());
}

void InFileListRepository::edit(List* list, string name) throw (NotFoundException) {
	ListRepository::edit(list->getId(), name);
}

void InFileListRepository::deleteList(List* list) throw (NotFoundException) {
	ListRepository::deleteList(list->getId());
}

InFileListRepository::~InFileListRepository() {
	// TODO Auto-generated destructor stub
}

