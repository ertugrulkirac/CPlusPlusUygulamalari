// DoWhile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

int main() {
    int i = 1;

    // do...while loop from 1 to 5
    do {
        cout << i << " ";
        ++i;
    } while (i <= 5);

    return 0;
}