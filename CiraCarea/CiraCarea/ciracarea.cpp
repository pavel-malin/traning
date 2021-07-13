#include<iostream>

using std::cout;
using std::cin;
using std::endl;

float ciracarea(float);

int main()
{
	float x;
	cout << "Radius: ";
	cin >> x;
	cout << "Result: " << ciracarea(x) << endl;
	return 0;
}


float ciracarea(float x)
{
	const float PI = 3.14159F;
	return  x * x * PI;
}