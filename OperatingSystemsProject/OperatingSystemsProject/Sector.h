#include "Block.h"
#include "cstdlib"
#include <vector>
#pragma once
class Sector
{
public:
	static const int kilobyte = 1024;
	static const int sectorSize = 1 * kilobyte;  //TODO: change to 64 * kilobyte
	static const int amountOfBlocks = sectorSize / Block::blockSize;
	std::vector<Block> blockList;
	Sector();
	void Sector::eraseSector();
	void Sector::printToSector();
	~Sector();
};

