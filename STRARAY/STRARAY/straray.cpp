#include<iostream>

using std::cout;
using std::endl;

int main()
{
	const int DAYS = 7;
	const int MAX = 12;
	
	char star[DAYS][MAX] =
	{
		"Monday", "Tuesday", "Wednesday", "Thrursday",
		"Firday", "Safurday", "Sunday"
	};
	for (int j = 0; j < DAYS; j++)
	{
		cout << star[j] << endl;
	}
	return 0;
}