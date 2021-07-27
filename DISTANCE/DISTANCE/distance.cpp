#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;


class Distance
{
private:
	int feet;
	float inches;
public:
	Distance()
	{
		feet = 0;
		inches = 0.0;
	}
	Distance(int f, float in)
	{
		feet = f;
		inches = in;
	}
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
	void add_dist(Distance, Distance);
	void div_dist(Distance, int);
};

void Distance::add_dist(Distance d1, Distance d3)
{
	inches = d1.inches + d3.inches;
	feet = 0;
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += d1.feet + d3.feet;
}
void Distance::div_dist(Distance d2, int divisor)
{
	float fltfeet = d2.feet + d2.inches / 12.0;
	fltfeet /= divisor;
	feet = int(fltfeet);
	inches = (fltfeet - feet) * 12.0;
}

int main()
{
	Distance dist[100];
	Distance total(0, 0.0), averg;
	int n = 0;
	char ans;
	cout << endl;

	do
	{
		cout << "\nEnter number distance: " << n + 1;
		dist[n++].getdist();
		cout << "\nStop and Play (n/y)?: ";
		cin >> ans;
	} while (ans != 'n');
	for (int i = 0; i < n; i++)
	{
		total.add_dist(total, dist[i]);
	}
	averg.div_dist(total, n);
	cout << "\nAverage: ";
	averg.showdist();
	cout << endl;
	return 0;
}