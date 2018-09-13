#include "stdafx.h"
#include "Sector.h"

Sector::Sector()
{
	for (int i = 0; i < amountOfBlocks; i++) {
		Block block;
		blockList.push_back(block);
	}
}

void Sector::eraseSector(unsigned char *A) {
	//modify the memory to empty bytes

}

void Sector::printToSector() {

}

Sector::~Sector()
{
}
