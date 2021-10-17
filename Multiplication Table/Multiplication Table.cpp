// Multiplication Table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    int number{ 0 };
    do
    {
        
        cout << "Enter a number: ";
        cin >> number;
        if (number != 0)
        {
            for (int i = 0; i < 11; i++)
            {
                cout << number << " X " << i << " = " << number * i << endl;
            }
        }
    } while (number != 0);

}
