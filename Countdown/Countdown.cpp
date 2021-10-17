// Countdown.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    for (int i = 10; i > -1; i--)
    {
        cout << i << endl;
        Sleep(1000);
    }
    cout << "Thundermans are go!";
}