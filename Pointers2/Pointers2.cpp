// Pointers2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/*Creating References
		A reference variable is a "reference" to an existing variable, and it is created with the& operator:*/


	string food = "Pizza";  // food variable
	string& meal = food;    // reference to food
	string& yemek = meal;

	/*Now, we can use either the variable name food or the reference name meal to refer to the food variable :*/

	/*string food = "Pizza";
	string& meal = food;*/

	cout << food << "\n";  // Outputs Pizza
	cout << meal << "\n";  // Outputs Pizza
	cout << yemek << "\n";  // Outputs Pizza

	/*C++ Memory Address*/
	//string food = "Pizza";

	cout << &food << endl; // Outputs 0x6dfed4
	cout << &meal << endl; // Outputs 
	cout << &yemek << endl; // Outputs 

	int var = 5;

	// Wrong! 
	// point_var is an address but var is not
	/*int* point_var = var;*/ // & iþareti yok
	int* point_var;

	// Wrong!
	// &var is an address
	// *point_var is the value stored in &var
	//*point_var = &var;

	// Correct! 
	// point_var is an address and so is &var
	/*point_var = &var;*/

	// Correct!
   // both *point_var and var are values
	/**point_var = var;*/

	//	point_var = &food;
	//*point_var = food;


}

