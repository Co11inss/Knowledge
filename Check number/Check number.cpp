// Check number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int aInt = 10;

    if (aInt < 10)
    {
        cout << "Number is too low" << endl;
    }
    else if (aInt > 10)
    {
        cout << "Number is too high" << endl;
    }
    else
    {
        cout << "Number is Perfect" << endl;
    }
}