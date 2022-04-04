///////////////////////////////////////////////////////////////////////////
// BitString.cpp

#include "BitString.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void BitString::init(long a1, long b1)
{
	setA(a1);
	setB(b1);
}

string BitString::toString()const
{
	stringstream sout;
	sout << "First part =  " << a << endl << "Second part =  " << b << endl;
	return sout.str();
}

void BitString::read()
{
	int x, y;

	cout << "First part = "; cin >> x;
	cout << "Second part = "; cin >> y;
	   init(x, y);
}

void BitString::display()const
{

	cout << toString();
}

BitString XoR(BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a ^ obj2.a;
	res.b = obj1.b ^ obj2.b;
	return res;

}



