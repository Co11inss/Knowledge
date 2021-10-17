// BMI Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //double height = 1.8;
    //double weight = 75.3;
    //double BMI = weight / (height * height);

    double height{ 0 };
    double weight{ 0 };
    

    cout << "Your height in m is: ";
    cin >> height;
    cout << "Your weight in kg is ";
    cin >> weight;

    double BMI = weight /(height * height);
    cout << "Therefore the BMI is " << BMI << endl;

    if (BMI < 18.5) 
    {
        cout << "You are underweight!";
    }
    else if (BMI > 24.5)
    {
        cout << "You are overweight!";

    }
    else
    {
        cout << "You are healthy!";
    }
  


    //float diameter = 9;
    //float radius = diameter / 2;
    //float pi = 3.142;
    //float area = (radius * radius) * pi;

    //cout << "The radius is " << radius << endl;
    //cout << "The area is " << area << endl;

}

