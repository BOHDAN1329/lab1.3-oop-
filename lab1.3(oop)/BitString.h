///////////////////////////////////////////////////////////////////////////
// BitString.h

#pragma once
#include <iostream>
#include <string>

using namespace std;

class BitString
{
private:
	long a, b;

public:
	long getA() const { return a; };
	long getB() const { return b; };
	void setA(long value) { a = value; }
	void setB(long value) { b = value; }
	void init(long a1, long b1);
	string toString();
	void read();
	void display();

	friend BitString XoR(BitString obj1, BitString obj2);
	friend BitString shiftLeft(BitString obj,int f);
	friend BitString shiftRight(BitString obj,int f);

};

