// Multiple Conditions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 4;
    int c = 6;
    int d = 8;

    if ((a == 2) && (b < 3))
    {
        cout << "Test A" << endl;
    }
    else
    {
        cout << "Not Test A" << endl;
    }
    if ((a != 3) && (b > 2))
    {
        cout << "Test B" << endl;
    }
    if ((c < 7) || (d > 9))
    {
        cout << "Test C" << endl;
    }
    if ((c >= 6) || (d <= 10))
    {
        cout << "Test D" << endl;
    }
}