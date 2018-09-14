#include "stdafx.h"
#include "Sector.h"

Sector::Sector()
{
	for (int i = 0; i < amountOfBlocks; i++) {
		Block block;
		blockList.push_back(block);
	}
}

void Sector::eraseSector() {
	int i = 0;
	blockList[i].eraseBlock();
}

void Sector::printToSector() {
	for (int i = 0; i < amountOfBlocks; i++) {
		blockList[i].printBlock();
	}
}

Sector::~Sector()
{
}
