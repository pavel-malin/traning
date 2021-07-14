#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance(int ft, float in) : feet(ft), inches(in)
	{}
	void getdist()
	{
		cout << "\nEnter the number of feet: ";
		cin >> feet;
		cout << "Enter the number of inches: ";
		cin >> inches;
	}
	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	const Distance football(300, 0);
	cout << "The field length is ";
	football.showdist();
	cout << endl;
	return 0;
}