#include "stdafx.h"
#include "Clustor.h"


Clustor::Clustor()
{
	for (int i = 0; i < totalAmountOfSectors; i++) {
		Sector sector;
		sectorList.push_back(sector);
	}
}

void Clustor::printBlocks() {
	for (int i = 0; i < totalAmountOfSectors; i++) {
		sectorList[i].printToSector();
	}
}

void Clustor::eraseAllSectors() {
	//int clustorSize = totalAmountOfSectors;
	//for (int i = 0; i < clustorSize; i++) {
	//	allocateSectorOfMemory();
	//}
}

std::string Clustor::getClustorBinary()
{
	std::string binaryString;
	for (int i = 0; i < totalAmountOfSectors; i++) {
		binaryString += sectorList[i].getSectorBinary();
	}
	return binaryString;
}

std::string Clustor::getNewBinary()
{
	return std::string();
}

void Clustor::loadClustor(std::string inputBinaryFile) {

}

Clustor::~Clustor()
{
}
