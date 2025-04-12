// C++ program to demonstrate 
// working of LIFO 
// using stack in C++ 
#include <iostream>
#include <stack>
using namespace std;


// Pushing element on the top of the stack 
int deger()
{
	int sonuc = 0;
	for (int i = 0; i < 9; i++)
	{ 
		 sonuc = sonuc + i;
	}

	return sonuc;
}



// Driver code
int main()
{
	cout << deger();
}

// This code is contributed by Arnab Kundu
