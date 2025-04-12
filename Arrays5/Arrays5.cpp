// Arrays5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C++ Program to display the elements of two
// dimensional array by passing it to a function

#include <iostream>
using namespace std;


void goster(int n[3][2]) {
	cout << "Degerler: " << endl;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
		}
	}
}
int main() {

	//int num[3][2] = {
	//	{3, 4},
	//	{9, 5},
	//	{7, 1}
	//};

	//goster(num);

	int num[4][2] = {
		{3, 4},
		{9, 5},
		{7, 1},
		{71, 11}
	};


	for (int i = 0; i <4; ++i) {
		for (int j = 0; j < 2; ++j) {
			cout << "num[" << i << "][" << j << "]: " << num[i][j] << endl;
		}
	}

	return 0;
}