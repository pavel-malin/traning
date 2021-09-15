#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

using std::cout;
using std::endl;

using std::strlen;
using std::strcpy;

int main()
{
	char s[] = "Bad head does not give rest to the legs.";
	char* str = s;
	int len = strlen(str);

	char* ptr;
	ptr = new char[len + 1];
	strcpy_s(ptr, 41, str); // defin (ERROR C2660) _CRT_SECURE_NO_WARNINGS

	cout << "ptr = " << ptr << endl;

	delete[] ptr;

	return 0;
	
}