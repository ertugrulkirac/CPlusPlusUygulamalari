// ArraysDimensions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int main()
{
  /*  int test[2][3][4] = { 3, 4, 2, 3, 0, -3, 9, 11, 23, 12, 23,
                2, 13, 4, 56, 3, 5, 9, 3, 5, 5, 1, 4, 9 };*/

 /*   int test[2][3][4] = {
                     { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
                     { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }
    };*/

    //Eleman 1 = { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} }
    //Eleman 2 = { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} }

    int dizi[2][2][2];

    /*int test[2][3][4] = {
                   { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
                   { {13, 4, 56, 3}, {5, 9, 3, 5}, {5, 1, 4, 9} } };*/


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "dizi[" << i << "][" << j << "][" << k << "] : "<< endl;
                cin >> dizi[i][j][k];
            }
        }
    }
   /* for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                cout << "dizi[" << i << "][" << j << "][" << k << "] : " << dizi[i][j][k] << endl;
            }
        }
    }*/

   cout << dizi[0][0][1];
}


