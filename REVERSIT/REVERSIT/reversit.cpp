#include<iostream>
#include<cstring>

using std::cout;
using std::endl;
using std::cin;

using std::strlen;

void reversit(char ch[]);

int main()
{
	const int MAX = 80;
	char cha[MAX];
	cout << "Enter string: ";
	cin.get(cha, MAX);
	cout << "\nResult string: " << cha << endl;
	reversit(cha);
	return 0;
}

void reversit(char ch[])
{
	int str = strlen(ch);
	int p = str;
	for (int i=0;i<str;i++)
	{
		cout  << ch[--p];
	}
}