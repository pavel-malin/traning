#include<iostream>

using std::cout;
using std::endl;

int main()
{
	void dispstr(char*);
	char str[] = "Loafers always have free time.";

	dispstr(str);

	return 0;
}

void dispstr(char* ps)
{
	while (*ps)
	{
		cout << *ps++;
	}
	cout << endl;
}