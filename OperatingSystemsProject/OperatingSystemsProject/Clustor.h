#include "Sector.h"
#include "list"
#pragma once
class Clustor
{
public:
	static const int totalAmountOfSectors = 1;//TODO: change to 20
	std::list<Sector> sectorList;
	Clustor();
	void eraseAllSectors();
	~Clustor();
};

