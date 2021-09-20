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
	void getdist()
	{
		cout << "\nEnter feet: ";
		cin >> feet;
		cout << "Enter inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	Distance& dist = *(new Distance);
	dist.getdist();

	dist.showdist();
	cout << endl;

	return 0;
}