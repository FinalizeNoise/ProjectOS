#include "stdafx.h"
#include "CreateFile.h"
//reference: https://stackoverflow.com/questions/478075/creating-files-in-c


CreateFile::CreateFile()
{
	std::ofstream outfile("D:\\Documents\\School\\CSC 322 Operating Systems\\Class2\\file\\test.bin");

	outfile << "11110000" << std::endl;

	outfile.close();
}


CreateFile::~CreateFile()
{
}
