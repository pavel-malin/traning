#include<iostream>

using std::cout;
using std::cin;
using std::endl;

enum posneg { pos, neg };

class Distance
{
protected:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0)
	{}
	Distance(int ft, float in) : feet(ft), inches(in)
	{}
	void getdist()
	{
		cout << "\nInput feet: ";
		cin >> feet;
		cout << "\nInput inches: ";
		cin >> inches;
	}
	void showdist()
	{
		cout << feet << "\'" << inches << '\"';
	}
};

class DistString : public Distance
{
private:
	posneg sing;
public:
	DistString() : Distance()
	{
		sing = pos;
	}
	DistString(int ft, float in, posneg sg = pos) : Distance(ft, in)
	{
		sing = sg;
	}
	void getdist()
	{
		Distance::getdist();
		char ch;
		cout << "input sign (+ or -): ";
		cin >> ch;
		sing = (ch == '+') ? pos : neg;
	}
	void showdist()
	{
		cout << ((sing == pos) ? "(+)" : "(-)");
		Distance::showdist();
	}
};

int main()
{
	DistString alpha;
	alpha.getdist();

	DistString beta(11, 6.25);

	DistString gamma(100, 55, neg);

	cout << "\nA = ";
	alpha.showdist();
	cout << "\nB = ";
	beta.showdist();
	cout << "\nC = ";
	gamma.showdist();

	return 0;
}