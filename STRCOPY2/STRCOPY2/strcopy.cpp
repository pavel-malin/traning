#include<iostream>
#include<string>

#pragma warning(disable : 4996) // the not error strcpy();

using std::cout;
using std::endl;

using std::strcpy; // error

int main()
{
	char str1[] = "They dropped the bear on the floor, tore off the bear's paw!";
	const int MAX = 80;
	char str2[MAX];
	strcpy(str2, str1); // error
	cout << str2 << endl;
	return 0;
}