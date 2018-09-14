#include "stdafx.h"
#include "CreateFile.h"
//reference: https://stackoverflow.com/questions/478075/creating-files-in-c

CreateFile::CreateFile()
{
}

void CreateFile::CreateTheFile(std::string text)
{
	std::ofstream outfile("D:\\Documents\\School\\CSC 322 Operating Systems\\Class2\\file\\test.bin");

	outfile << text << std::endl;

	outfile.close();
}

CreateFile::~CreateFile()
{
}
