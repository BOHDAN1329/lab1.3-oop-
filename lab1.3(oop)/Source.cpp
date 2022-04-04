///////////////////////////////////////////////////////////////////////////
// Source.cpp

#include <iostream>
#include "BitString.h"

using namespace std;

int main() 
{
	cout << "first object" << endl;
	BitString b1; 
	b1.read();
	b1.display();
	cout << "second object" << endl;
	BitString b2; 
	b2.read();
	b2.display();

	BitString XOR = XoR(b1, b2);
	cout << "first object" << endl;
	
	
	cout << "First object ^ Second object " << endl;
	XOR.display();
	
	return 0;





}