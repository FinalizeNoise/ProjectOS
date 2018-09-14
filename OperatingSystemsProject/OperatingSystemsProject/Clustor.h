#include "Sector.h"
#include <vector>
#include "list"
#pragma once
class Clustor
{
public:
	static const int totalAmountOfSectors = 1;//TODO: change to 20
	std::vector<Sector> sectorList;
	Clustor();
	void eraseAllSectors();
	void printBlocks();
	~Clustor();
};

