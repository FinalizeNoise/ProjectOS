#include "stdafx.h"
#include "FileManager.h"
//reference: https://stackoverflow.com/questions/478075/creating-files-in-c

FileManager::FileManager()
{
}

void FileManager::createTheFile(std::string text)
{
	std::ofstream outfile("D:\\Documents\\School\\CSC 322 Operating Systems\\Class2\\file\\test.bin");

	outfile << text << std::endl;

	outfile.close();
}

void FileManager::saveTheFile(std::string text)
{
	createTheFile(text);
}

std::string FileManager::openTheFile()
{
	return std::string();//TODO: Open the file.
}

bool FileManager::doesFileNotExist()
{
	return false;
}

FileManager::~FileManager()
{
}
