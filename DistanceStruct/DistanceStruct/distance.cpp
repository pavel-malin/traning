#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct Distance
{
	int flaet;
	int prots;
};

Distance brost(Distance, Distance);
void proset(Distance);

int main()
{
	Distance d1, d2, d3;
	cout << "D1: ";
	cin >> d1.flaet >> d1.prots;
	cout << "\nD2: ";
	cin >> d2.flaet >> d2.prots;
	d3 = brost(d1, d2);
	cout << "d1== ";
	proset(d1);
	cout << "\nd2== ";
	proset(d2);
	cout << "\n< ";
	proset(d3);
	return 0;
}

Distance brost(Distance dd1, Distance dd2)
{
	if (dd1.flaet > dd2.flaet)
		return dd1;
	if (dd1.flaet < dd2.flaet)
		return dd2;
	if (dd1.prots > dd2.prots)
		return dd1;
	else
		cout << dd2.prots;
}

void proset(Distance ddd)
{
	cout << ddd.flaet << "'- " << ddd.prots;
}