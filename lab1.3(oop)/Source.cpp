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
	
	int N,T,G,D;
	
	cout << "Left shift = "; cin >> N;
	BitString shiftLeft1 = shiftLeft(b1,N);
	cout << "Left shift for " << N << " bits" << endl;
	shiftLeft1.display();
	
	cout << "Right shift = "; cin >> T;
	BitString shiftRight1 = shiftRight(b1,T);
	cout << "Right shift for " << T << " bits" << endl;
	shiftRight1.display();

	cout << "Left shift = "; cin >> G;
	BitString shiftLeft2 = shiftLeft(b2, G);
	cout << "Left shift for " << G << " bits" << endl;
	shiftLeft2.display();

	cout << "Right shift = "; cin >> D;
	BitString shiftRight2 = shiftRight(b2, D);
	cout << "Right shift for " << D << " bits" << endl;
	shiftRight2.display();

	cout << "First object ^ Second object " << endl;
	XOR.display();
	
	return 0;





}