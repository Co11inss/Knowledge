// Adding variables together.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float y = -1.5;
	int a = 6;
	int b = 4;
	int c = 7;
	int d = 2;
	y = 5;
	float x = y + (a + b) * 2 / (c - d);

	cout << "Value of Y is " << y << endl;
	cout << "Value of A is " << a << endl;
	cout << "Value of B is " << b << endl;
	cout << "Value of C is " << c << endl;
	cout << "Value of D is " << d << endl;
	cout << "Therefore the value of X is " << x << endl;

}


