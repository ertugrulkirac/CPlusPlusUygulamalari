// LogicalOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //int x = 7;
    //int y = 5;
    //cout << (x > 3 && y < 10); // returns true (1) because 7 is greater than 3 AND 5 is less than 10

    //int x = 1;
    //int y = 3;
    //cout << (1 > 2 || y < 4); // returns true (1) because one of the conditions are true (1 is not greater than 2, but 3 is not less than 4)

    int x = 6;
    int y = 9;
    cout << (!(x > 4 && y < 15)); // returns false (0) because ! (not) is used to reverse the result
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
