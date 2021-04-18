#include<iostream>

using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "");
	int count = 7;
	float avgWieght = 155.5F;
	double totalWiegth = count * avgWieght;
	cout << "Вес равен " << totalWiegth << endl;
	return 0;
}