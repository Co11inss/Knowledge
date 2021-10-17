// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void Limit(int array_name[], int array_length, int limit)
{
	for (int z = 0; z < array_length; z++)
	{
		if (array_name[z] > limit)
		{
			array_name[z] = limit;
			cout << array_name[z] << " ";
			
		}
		else
		{
			cout << array_name[z] << " ";
			
		}
		
	}
	
}

void DisplayBig(int array_name[], int array_length, int limit)
{
	for (int i = 0; i < array_length; i++)
	{
		if (array_name[i] > limit)
		{
			cout << array_name[i] << " ";
		}
	}
}

int main()
{
	srand(time(NULL));
	int Array[10];

	//Creates the Array
	for (int i = 0; i < 10; i++)
	{
		Array[i] = rand() % 50 + 1;
	}

	//Prints the Array

	cout << "The Array: ";
	for (int j = 0; j < 10; j++)
	{
		cout << Array[j] << " ";
	}
	
	//Only numbers above the limit
	cout << endl;
	cout << "The Big Numbers: ";
	DisplayBig(Array, 10, 25);
	
	

	//Print the Array with Limit
	cout << endl;
	cout << "The Array with Limit: ";
	Limit(Array, 10, 25);

	cout << endl;
	//Print only numbers above limit
	DisplayBig(Array, 10, 25);

}


