#include <iostream>
#include <fstream> 
#include <String>

#ifndef FileManager_H
#define FileManager_H
#pragma once
class FileManager
{
public:
	FileManager();
	void createTheFile(std::string text);
	void saveTheFile(std::string text);
	std::string openTheFile();
	bool doesFileNotExist();
	~FileManager();
};

#endif