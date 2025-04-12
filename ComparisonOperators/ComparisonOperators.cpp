// ComparisonOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int x1 = 9;
    int y1 = 1;
    cout << (x1 == y1) << endl; // returns 0 (false) because 9 is not equal to 1


    int x2 = 18;
    int y2 = 11;
    cout << (x2 != y2) << "\n"; // returns 1 (true) because 18 is not equal to 11

    if (x2 != y2)
    {
        cout << "True" << endl;
    }

    int x3 = 7;
    int y3 = 6;
    cout << (x3 > y3) << endl; // returns 1 (true) because 7 is greater than 6

    int x4 = 93;
    int y4 = 54;
    cout << (x4 < y4) << endl; // returns 0 (false) because 55 is not less than 93

    int x5 = 17;
    int y5 = 5;
    cout << (x5 >= y5) << endl;; // returns 1 (true) because 17 is greater than, or equal, to 5

    int x6 = 14;
    int y6 = 3;
    cout << (x6 <= y6) << endl; // returns 0 (false) because 14 is neither less than or equal to 3
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
