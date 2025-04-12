// SumofTwoArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main() {
    const int size = 5; // You can adjust the size of your arrays as needed
    int array1[size] = { 1, 2, 3, 4, 5 };
    int array2[size] = { 6, 7, 8, 9, 10 };
    int result[size];

    for (int i = 0; i < size; ++i) {
        result[i] = array1[i] + array2[i];
    }

    std::cout << "Sum of arrays using for loop: ";
    for (int i = 0; i < size; ++i) {
        std::cout << result[i] << " ";
    }

    return 0;
}