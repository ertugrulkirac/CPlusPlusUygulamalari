// Structures3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std; 


struct myStructure {
        int myNum;
        string myString;
        double yaricap;
    } myStruct;

int main()
{

   

    myStruct.myNum = 1;
    myStruct.myString = "Hello World!";
    myStruct.yaricap = 2.3;

    cout << myStruct.myNum << "\n";
    cout << myStruct.myString << "\n";
    cout << myStruct.yaricap << "\n";
}