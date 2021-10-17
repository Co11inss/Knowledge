// Average of an arrar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int numbers[] = { 23, 54, 6, 2, 4, 10, 43, 32, 84, 26 };

	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		int index = numbers[i];
		count = count + index;
	}
	cout << "The total was: " << count << endl;

	double mean = count / 10;

	cout << "So the mean was: " << mean << endl;}

   
