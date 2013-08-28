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
	writeInFile();
}

void InFileListRepository::edit(int id, string name) throw (NotFoundException) {
	ListRepository::edit(id, name);
	writeInFile();
}

void InFileListRepository::remove(int id) throw (NotFoundException) {
	ListRepository::remove(id);
	writeInFile();
}

void InFileListRepository::writeInFile() {
	//string fileName = "something";
	 fstream fout(this->fileName.c_str(), ios::out);
	 for(int i=0; i < this->lists->size(); i++) {
		 fout<<(*lists)[i]->toString()<<"\n";
	 }
	  fout.close();
}

void InFileListRepository::readFromFile() {
	fstream fin(&this->fileName[0], ios::in);
		int id, itemId, completedFlag;
		bool isCompleted;
		string name, itemName, itemDescription;
		char line[8192];
		while(!fin.eof()) {
			fin.getline(line, 8192);
			if (strlen(line) > 0) {
				vector<string> pieces = StringHelper::explode(line, ';');
				List* list = new List(TypeConvertor::convertStringToInt(pieces[0]), pieces[1]);
				int position = 2;
				while (position < pieces.size()) {
					itemId = TypeConvertor::convertStringToInt(pieces[position]);
					itemName = pieces[position + 1];
					itemDescription = pieces[position + 2];
					completedFlag = TypeConvertor::convertStringToInt(pieces[position + 3]);
					if (completedFlag == 0) {
						isCompleted = false;
					} else {
						isCompleted= true;
					}
					position += 4;
					list->addItem(itemId, itemName, itemDescription, isCompleted);
				}
				this->lists->push_back(list);
			}
		}
		fin.close();
}

InFileListRepository::~InFileListRepository() {
	// TODO Auto-generated destructor stub
}

