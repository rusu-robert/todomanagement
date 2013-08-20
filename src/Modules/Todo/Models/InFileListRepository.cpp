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

void InFileListRepository::remove(int id) throw (NotFoundException) {
	ListRepository::remove(id);
}

void InFileListRepository::writeInFile() {
	//string fileName = "something";
	 fstream fout(this->fileName.c_str(), ios::out);
	 for(int i=0; i < this->lists->size(); i++) {
		 fout<<(*lists)[i]->toString()<<"\n";
	 }
	  fout.close();
}

InFileListRepository::~InFileListRepository() {
	// TODO Auto-generated destructor stub
}

