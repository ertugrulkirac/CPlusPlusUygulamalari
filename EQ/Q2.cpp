#include <iostream>
using namespace std;

int main()
{
	int x = 6, y = 5;
	y *= x;
	if (y > 5)
		cout << "A";
	else if (y > 10)
		cout << "B";
	else if (y > 15)
		cout << "C";
	else if (y > 20)
		cout << "D";
	else
		cout << "E";
}