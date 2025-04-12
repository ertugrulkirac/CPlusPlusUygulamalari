// Structures2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    struct myStructure {
        int myNum;
        string myString;
        float yaricap;
    };

    myStructure my_struct;

    my_struct.myNum = 1;
    my_struct.myString = "Hello World!";
    my_struct.yaricap = 2.3f;

    cout << my_struct.myNum << "\n";
    cout << my_struct.myString << "\n";
    cout << my_struct.yaricap << "\n";
}