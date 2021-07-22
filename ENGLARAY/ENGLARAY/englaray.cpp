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
		cout << "\nEnter the feet: ";
		cin >> feet;
		cout << "Enter the inches: ";
		cin >> inches;
	}
	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	Distance dist[100];
	int n = 0;
	char ans;

	cout << endl;
	do
	{
		cout << "Enter the len of number: " << n + 1;
		dist[n++].getdist();
		cout << "(n/y)?: ";
		cin >> ans;
	} while (ans != 'n');
	
	for (int j = 0; j < n; j++)
	{
		cout << "\nLen the number " << j + 1 << " : ";
		dist[j].showdist();
	}
	cout << endl;
	return 0;
}