// Currency conversion table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double pounds{ 0 };

    cout << "Enter the currency conversion rate for pounds per dollar: ";
    cin >> pounds;

    cout << "Dollar     Pound" << endl;

    for (int i = 1; i < 11; i++)
    {
        cout << i << "          " << i * pounds << endl;
    }
}