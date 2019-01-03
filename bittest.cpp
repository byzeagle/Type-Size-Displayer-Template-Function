#include "pch.h"
#include <cassert>
#include <iostream>
#include <bitset>

#define b0000 0x0
#define b0001 0x1
#define b0010 0x2
#define b0011 0x3
#define b0100 0x4
#define b0101 0x5
#define b0110 0x6
#define b0111 0x7
#define b1000 0x8
#define b1001 0x9
#define b1010 0xA
#define b1011 0xB
#define b1100 0xC
#define b1101 0xD
#define b1110 0xE
#define b1111 0xF

void test();

int main()
{
	test();
	while (1);
	return 0;
}

void test()
{
	assert(b1000 == (b0001 << 3));
	assert(b1000 == (b0010 << 2));
	assert(b0111 == (b1110 >> 1));
	assert(b0001 == (b0100 >> 2));
	assert(b0000 == (b1111 >> 4));
	assert(b0000 == (b0000 << 1));
	assert(b0000 == (b1111 & b0000));
	assert(b1111 == (b0101 ^ b1010));
	assert(b1111 == (b1111 | b0000));

	char a = 10;
	std::bitset<8> x(a);
	std::cout << "bitset<8> : " << x << std::endl;

	short c = -315;
	std::bitset<16> y(c);
	std::cout << "bitset<16> : " << y << std::endl;

	int n = -32;
	std::bitset<32> k(n);
	std::cout << "bitset<32> : " << k << std::endl;

	int b = -16;
	std::bitset<32> z(b);
	std::cout << "bitset<32> : " << z << std::endl;

	std::cout << "z & y : " << (k & z) << std::endl;
}
