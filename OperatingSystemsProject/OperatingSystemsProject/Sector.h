#include "Block.h"
#include "cstdlib"
#include "list"
#pragma once
class Sector
{
public:
	static const int kilobyte = 1024;
	static const int sectorSize = 1 * kilobyte;  //TODO: change to 64 * kilobyte
	static const int amountOfBlocks = sectorSize / Block::blockSize;
	std::list<Block> blockList;
	Sector();
	void Sector::eraseSector(unsigned char *A);
	void Sector::printToSector();
	~Sector();
};

