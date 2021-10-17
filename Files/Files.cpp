// Files.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream myfile;
    myfile.open("Session4Exercise3.txt");

    string content;

    //Check to see if file exist
    if (!myfile)
    {
        cout << "The file does not exist";
    }
    else
    {   //read and display the contents of the file
        while (!myfile.eof()) // check the end of the file
        {
            myfile >> content; //Read in a string value
            cout << content << " ";

        }
        myfile.close();
    }
    

}
