// ClassandObject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MyClass {       // The class
public:             // Access specifier
    int myNumber;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    float sayi;
};


int main()
{
   
    MyClass myObj;  // Create an object of MyClass
    // Access attributes and set values
    myObj.myNumber = 15;
    myObj.myString = "Some text";
    myObj.sayi = 10.1;

    MyClass nesne;

    nesne.myNumber = 20;

    // Print attribute values
    cout << myObj.myNumber << "\n";
    cout << myObj.sayi<< "\n";
    cout << myObj.myString;
    cout << nesne.myNumber;
    return 0;
}

