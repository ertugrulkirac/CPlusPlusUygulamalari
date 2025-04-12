// Structures4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct {
    string brand;
    string model;
    int year;
} myCar1, myCar2;


int main()
{

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;


    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;


    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
}
