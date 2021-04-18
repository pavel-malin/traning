#include<iostream>

using std::cout;
using std::cin;

struct Volume
{
	int n;
	float f;
};

int main()
{
	setlocale(LC_ALL, "");
	Volume v1, v3;
	Volume v2 = { 15, 6.25 };
	cout << "¬ведите число: ";
	cin >> v1.n;
	cout << "¬ведите число: ";
	cin >> v1.f;

	v3.f = v1.f + v2.f;
	v3.n = 0;
	if (v3.f >= 17.0)
	{
		v3.f -= 17.0;
		v3.n++;
	}
	v3.n += v1.n + v2.n;
	cout << v1.n << " " << v1.f;
	cout << v2.n << " " << v2.f;
	cout << v3.n << " " << v3.f;
	return 0;
}