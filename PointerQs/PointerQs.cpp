// PointerQs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void fun(int* p)
{
    int q = 10;
    p = &q;
    *p = q;
}

int main()
{
    int r = 5;
    int* x = &r ;
    fun(x);
    cout << *x << endl;
    return 0;
}

