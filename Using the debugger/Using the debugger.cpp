// Using the debugger.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    float aFloat = 4.9;
    //Print out the starting value
    cout << "Starting value for aFloat is " << aFloat << endl;
    int bInt = 0;

    //Do calculation
    bInt = aFloat / 3;

    if (bInt == 1)
    {
        cout << "Result is: ";
        cout << aFloat / 3;
    }
}
    
