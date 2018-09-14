#include "stdafx.h"
#include "Block.h"

Block::Block()
{	
	eraseBlock();
}

//modify the memory to empty bytes
void Block::eraseBlock() {
	for (int i = 0; i < blockSize; i++)
	{
		A[i] = emptyByte;
	}
}

void Block::writeBlock() {

}

std::string Block::getBlockBinary()
{
	std::string binaryString;
	for (int i = 0; i < blockSize; i++)
	{
		binaryString += A[i];
	}
	return binaryString;
}

void Block::printBlock() {
	for (int i = 0; i < blockSize; i++)
	{
		printf("%d ", A[i]);
	}
	std::cout << "\n\n";
}

Block::~Block()
{
}
