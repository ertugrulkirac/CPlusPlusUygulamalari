// Structures1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main()
{

    struct {
        int myNum;
        string myString;
    } myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
}

