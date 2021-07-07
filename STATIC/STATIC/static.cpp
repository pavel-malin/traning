#include<iostream>

using std::cout;
using std::endl;
using std::cin;

float getavg(float);

int main()
{
	setlocale(LC_ALL, " ");
	float data = 1, avg;
	while (data != 0)
	{
		cout << "Введите число: ";
		cin >> data;
		avg = getavg(data);
		cout << "Среднее значение: " << avg << endl;
	}
	return 0;
}

float getavg(float newdata)
{
	static float total = 0;
	static int count = 0;
	count++;
	total += newdata;
	return total / count;
}
