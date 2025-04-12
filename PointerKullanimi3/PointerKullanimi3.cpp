// PointerKullanimi3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    
        int var = 10;
        int* ptr1 = &var;
        int** ptr2 = &ptr1;
        int*** ptr3 = &ptr2;
        cout << &ptr1 << endl ;
        cout << *ptr3;
        return 0;
}
