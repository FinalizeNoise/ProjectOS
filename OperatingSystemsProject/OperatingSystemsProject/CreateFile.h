#include <iostream>
#include <fstream> 
#include <String>

#ifndef CREATEFILE_H
#define CREATEFILE_H
#pragma once
class CreateFile
{
public:
	CreateFile();
	void CreateTheFile(std::string text);
	~CreateFile();
};

#endif