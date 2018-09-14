#include "iostream"
#include "String"
#pragma once

#ifndef BLOCK_H
#define BLOCK_H
class Block
{
public:
	static const unsigned char emptyByte = 255;
	static const int blockSize = sizeof(emptyByte) * 64;
	unsigned char *A = (unsigned char*)malloc(blockSize * sizeof(emptyByte));
	Block();
	void eraseBlock();
	void printBlock();
	void writeBlock();
	std::string getBlockBinary();
	~Block();
};

#endif