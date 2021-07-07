#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Data
{
	int d;
	int m;
	int y;
};


int main()
{
	Data data;
	cout << "Enter today's date in the format day/month/year: " << endl;
	cin >> data.d;
	cin >> data.m;
	cin >> data.y;
	cout << endl;
	cout << data.d << "/" << data.m << "/" << data.y;
	return 0;
}