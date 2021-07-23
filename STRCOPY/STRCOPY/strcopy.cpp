#include<iostream>
#include<cstring>


using std::cout;
using std::endl;

using std::strlen;

int main()
{
	char str1[] = "The little Christmas tree is cold in winter.";
	int j;
	const int MAX = 80;
	char str2[MAX];

	for (j = 0; j < strlen(str1); j++)
		str2[j] = str1[j];
	str2[j] = '\0';
	cout << str2 << endl;
	return 0;
}
