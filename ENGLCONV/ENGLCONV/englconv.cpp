#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Distance
{
private:
	const float MTF;
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F)
	{}
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters;
		feet = int(fltfeet);
		inches = 12 * (fltfeet - feet);
	}
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
	{}
	void getdist()
	{
		cout << "\nInput feet: ";
		cin >> feet;
		cout << "\nInput inches: ";
		cin >> inches;
	}
	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
};

int main()
{
	float mtrs;
	Distance dist1 = 2.35F;

	cout << "\ndist1 = ";
	dist1.showdist();

	mtrs = static_cast<float>(dist1);

	cout << "\ndist1 = " << mtrs << " meters\n";

	Distance dist2(5, 10.25);

	mtrs = dist2;
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist2 = " << mtrs << " meters\n";


	//dist2 = mtrs (ERROR)

	return 0;
}