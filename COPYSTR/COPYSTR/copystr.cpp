#include<iostream>

using std::cout;
using std::endl;

int main()
{
	void copystr(char*, const char*);
	char s1[] = "In a hurry, you will make people laugh!";
	char* str1 = s1;
	char str2[80];

	copystr(str2, str1);
	cout << str2 << endl;

	return 0;
}

void copystr(char* dest, const char* str)
{
	while (*str)
	{
		*dest++ = *str++;
	}
	*dest = '\0';
}