#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;

int main()
{
	setlocale(LC_ALL, "");
	double number, answer;
	cout << "¬ведите число: ";
	cin >> number;
	answer = sqrt(number);
	cout << " вадратный корень равен: "
		<< answer << endl;
	return 0;
}