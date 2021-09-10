#include<iostream>

using std::cout;
using std::endl;

int main()
{
	char str1[] = "Array definition";
	char s[] = "Pointer definition";
	char* str2 = s;

	cout << str1 << endl;
	cout << str2 << endl;
	
	//str1++ the ERROR
	str2++;
	
	cout << str2 << endl;

	return 0;
}