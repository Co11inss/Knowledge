// Ounces to grams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    float ounce1{ 0 };
    int choice{ 0 };


   
    
    cout << "0. Exit" << endl;
    cout << "1. Convert Ounces" << endl;
    cout << "2. Conversion table" << endl;
    cout << endl << "Choice: ";
    cin >> choice;

    if (choice == 1)
    {
       
       cout << "How many ounces would you like to convert?" << endl;
       cin >> ounce1;
       float grams = ounce1 * 28.3495;
       cout << ounce1 << " ounces => " << grams << " grams" << endl;
    }
    
    if (choice == 2)
    {
        
        cout << "Ounces    Grams" << endl;
        for (int i = 1; i < 11; i++)
        {
            cout << i << "      " << i * 28.3495 << endl;
        }
    }
}