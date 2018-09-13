#include "stdafx.h"
#include "Block.h"

Block::Block()
{
	unsigned char *A = (unsigned char*)malloc(blockSize * sizeof(emptyByte));
	eraseBlock(A);
	printBlock(A);
}

//modify the memory to empty bytes
void Block::eraseBlock(unsigned char *A) {
	for (int i = 0; i < blockSize; i++)
	{
		A[i] = emptyByte;
	}
}

void Block::printBlock(unsigned char *A) {
	for (int i = 0; i < blockSize; i++)
	{
		printf("%d ", A[i]);
	}
	std::cout << "\n\n";
}

Block::~Block()
{
}
