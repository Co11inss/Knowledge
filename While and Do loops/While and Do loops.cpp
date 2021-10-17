// While and Do loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    //do loop

    int counter = 0;
    do
    {
        cout << "Count: " << counter << endl;
        counter = counter + 1;
    } while (counter < 5);

    //while loop

    int counter2 = 0;
    while (counter2 < 6)
    {
        cout << "Count2: " << counter2 << endl;
        counter2 = counter2 + 1;
    }

}

