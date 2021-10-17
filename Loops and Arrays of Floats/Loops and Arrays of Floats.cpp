// Loops and Arrays of Floats.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

using namespace std;

void Mean(float array_name[], int array_length)
{
    float total{ 0 };
    for (int i = 0; i < array_length; i++)
    {
        total = total + array_name[i];
        
    }
    cout << total / array_length << endl;
}

void Highest(float array_name[], int array_length)
{
    float largest = array_name[0];
    for (int i = 0; i < array_length; i++)
    {
        if (largest < array_name[i])
        {
            largest = array_name[i];
        }
    }
    cout << largest << endl;
}

void Lowest(float array_name[], int array_length)
{
    float smallest = array_name[0];
    for (int i = 0; i < array_length; i++)
    {
        if (smallest > array_name[i])
        {
            smallest = array_name[i];
        }
    }
    cout << smallest << endl;
}

int main()
{

    float Array[13] = { 2.6, 3.4, 5.7, 1.855, 10.7, 20.4, 4.2621, 7.86, 10.7, 20.56, 13.23, 11.653, 6.48 };

    cout << "Mean: ";
    Mean(Array, 13);

    cout << "Highest: ";
    Highest(Array, 13);

    cout << "Lowest: ";
    Lowest(Array, 13);

    //Median
    float median_index = Array[13 / 2];
    cout << "Median: " << median_index;

    //Mode
    
}