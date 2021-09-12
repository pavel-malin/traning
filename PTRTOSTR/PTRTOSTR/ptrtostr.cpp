#include<iostream>

using std::cout;
using std::endl;

const int DAYS = 7;	

int main()
{
	char ss1[] = { "Mobday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

	char* arrptrs[DAYS] = ss1; // ERROR C2440 C2078
	//char* arrptrs[DAYS] = { "Mobday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" }; //ERROR C2440

	for (int i = 0; i < DAYS; i++)
	{
		cout << arrptrs[i] << endl;
	}

	return 0;
}