#include "stdafx.h"
#include "Clustor.h"


Clustor::Clustor()
{
	int clustorSize = totalAmountOfSectors;
	for (int i = 0; i < clustorSize; i++) {
		Sector sector;
		sectorList.push_back(sector);
	}
}

void Clustor::eraseAllSectors() {
	//int clustorSize = totalAmountOfSectors;
	//for (int i = 0; i < clustorSize; i++) {
	//	allocateSectorOfMemory();
	//}
}

Clustor::~Clustor()
{
}
