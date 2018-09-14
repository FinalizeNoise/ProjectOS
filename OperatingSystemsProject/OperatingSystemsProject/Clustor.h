#include "Sector.h"
#include "vector"
#include "list"
#include <String>

#ifndef CLUSTOR_H
#define CLUSTOR_H
#pragma once
class Clustor
{
public:
	static const int totalAmountOfSectors = 1;//TODO: change to 20
	std::vector<Sector> sectorList;
	Clustor();
	void eraseAllSectors();
	void printBlocks();
	std::string	getClustorBinary();
	std::string	getNewBinary();
	void loadClustor(std::string inputBinaryFile);
	~Clustor();
};

#endif
