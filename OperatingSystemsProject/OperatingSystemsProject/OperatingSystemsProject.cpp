//Author: Sean Benson
//Class: Operating Systems CSC 322
//OperatingSystemsProject.cpp : Defines the entry point for the console application.
//source: https://www.youtube.com/watch?annotation_id=annotation_395907&feature=iv&index=7&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&src_vid=_8-ht2AKyH4&v=xDVC3wKjS64
//modified the code  
//test comment

#include "stdafx.h"
#include "Clustor.h"
#include "CreateFile.h"

void pause()
{
	system("pause");
};

int main()
{
	Clustor clustor;
	clustor.printBlocks();
	CreateFile createFile;
	pause();
	//clustor.~Clustor;


	return 0;
};


