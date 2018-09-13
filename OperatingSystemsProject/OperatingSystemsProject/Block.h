#include "iostream"
#pragma once

#ifndef BLOCK_H
#define BLOCK_H
class Block
{
public:
	static const unsigned char emptyByte = 255;
	static const int blockSize = sizeof(emptyByte) * 64;
	Block();
	void eraseBlock(unsigned char *A);
	void printBlock(unsigned char *A);
	~Block();
};

#endif