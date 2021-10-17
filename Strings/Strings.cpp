// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void First_Capital(string word)
{
	char first = word[0];
	int ascii = int(first);
	if (ascii >= 97)
	{
		ascii = ascii - 32;
		char first = ascii;
		cout << first;
		
	}
	else
	{
		cout << first;
	}
}

void Lower_Case(string word)
{
	for (int i = 1; i < word.length(); i++)
	{
		char letter = word[i];
		int ascii = int(letter);
		if (ascii < 97)
		{
			ascii = ascii + 32;
			char letter = ascii;
			cout << letter;
		}
		else
		{
			cout << letter;
		}
	}
		
}

void Sort(string array[], int array_length)
{
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		string temp;
		for (int i = 0; i < (array_length -1); i++)
		{
			if (int(array[i][0]) > int(array[i + 1][0]))
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sorted = false;
			}
		}
	}
	for (int i = 0; i < array_length; i++)
	{
		cout << array[i] << " ";
	}
}


int main()
{
	const int TOWNTOTAL = 6;
	string towns[TOWNTOTAL] = { "london", "glasGow", "HARWICH", "NoTtInGHaM","DERBy","BriSToL" };

	for (int i = 0; i < TOWNTOTAL; i++)
	{

		First_Capital(towns[i]);
		Lower_Case(towns[i]);
		cout << " ";

		
	}
	cout << endl;
	Sort(towns, TOWNTOTAL);
}