//Author: Sean Benson
//Class: Operating Systems CSC 322
//OperatingSystemsProject.cpp : Defines the entry point for the console application.
//source: https://www.youtube.com/watch?annotation_id=annotation_395907&feature=iv&index=7&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&src_vid=_8-ht2AKyH4&v=xDVC3wKjS64
//modified the code  
//test comment

#include "stdafx.h"
#include "Clustor.h"
#include "FileManager.h"

void pause()
{
	system("pause");
};

int main()
{
	//variables
	FileManager fileManager;
	Clustor clustor;

	//first create the file if it doesn't exist 
	if (fileManager.doesFileNotExist()) {
		fileManager.createTheFile(clustor.getNewBinary());
	}

	//Load the file into the clustor class which modifies the file.
	clustor.loadClustor(fileManager.openTheFile());

	//save the changes
	fileManager.saveTheFile(clustor.getClustorBinary());

	//Display changes
	clustor.printBlocks();

	pause();
	//clustor.~Clustor;
	return 0;
};


