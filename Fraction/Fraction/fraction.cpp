#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct number
{
	int ch;
	int zh;
};

int main()
{
	double price;
	number num;
	cout << "Enter the first fraction: ";
	cin >> num.ch;
	cout << "\nEnter the second fraction: ";
	cin >> num.zh;
	price = (num.ch / num.zh) + (num.ch * 3 + num.zh * 2) / (num.zh * 3);
	cout << "Result: " << price;
	return 0;
}
