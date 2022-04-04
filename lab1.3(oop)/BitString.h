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
	string toString()const;
	void read();
	void display()const;

	friend BitString XoR(BitString obj1, BitString obj2);


};

