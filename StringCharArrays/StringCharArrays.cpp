#include<iostream>
#include<string>
using namespace std;


int main() {
	string s = "Hi I am Mr X";
	char arr[] = "Hi I am Mr X";
	char dizi[] = { 'H', 'i', ' ', 'I', ' ', 'a', 'm', ' ', 'M', 'r', ' ', 'X'};
	string meyveler[] = { "karpuz", "kavun", "portakal" };
	cout << s.length() << endl;
	cout << s.size() << endl;
	cout << strlen(arr) << endl; 
	//cout << strlen(dizi) << endl;

	for (int i = 0; i < sizeof(meyveler) / sizeof(string); i++)
	{
		cout << meyveler[i] << endl;
	}

	//for (int i = 0; i < sizeof(dizi)/sizeof(char); i++)
	//{
	//	cout << arr[i];
	//}


	//for (int i = 0; i<s.length() ; i++) {

	//	cout << s[i];
	//}
	
}