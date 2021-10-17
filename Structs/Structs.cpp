// Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


using namespace std;

int main()
{
    struct Size
    {
        float Height;
        float Length;
        float Weight;
    };


    struct Pet
    {
        string Name;
        int Age;
        string Type;
        Size Sizes;
    };


    Pet myPet;

    cout << " What is the name of your pet? ";
    cin >> myPet.Name;

    cout << " What is the age of your pet? ";
    cin >> myPet.Age;

    cout << " What is the type of your pet, 1 = Cat, 2 = Dog, 3 = Bird ?";
    cin >> myPet.Type;

    cout << " How tall is your pet? ";
    cin >> myPet.Sizes.Height;

    cout << " What's the length of your pet? ";
    cin >> myPet.Sizes.Length;

    cout << " How heavy is your pet? ";
    cin >> myPet.Sizes.Weight;

    if (myPet.Type == "1")
    {
        myPet.Type = "Cat";
    }
    else if (myPet.Type == "2")
    {
        myPet.Type = "Dog";
    }
    else if (myPet.Type == "3")
    {
        myPet.Type = "Bird";
    }
    cout << "Your " << myPet.Type << " is called " << myPet.Name << " and is " << myPet.Age << " years old." << endl;
    cout << "It's height, length and height are: " << myPet.Sizes.Height << "-" << myPet.Sizes.Length << "-" << myPet.Sizes.Weight << endl;
}

