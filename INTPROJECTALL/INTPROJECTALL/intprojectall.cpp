#include<iostream>
#include<process.h>

using std::cout;
using std::cin;
using std::endl;

using std::exit;

class Int
{
private:
	int i;
public:
	Int() : i(0)
	{}
	Int(int ii) : i(ii)
	{}
	void putInt()
	{
		cout << i;
	}
	void getInt()
	{
		cin >> i;
	}
	operator int()
	{
		return i;
	}
	Int operator+(Int i2)
	{
		return checkit(long double(i) + long double(i2));
	}
	Int operator-(Int i2)
	{
		return checkit(long double(i) - long double(i2));
	}
	Int operator*(Int i2)
	{
		return checkit(long double(i) * long double(i2));
	}
	Int operator/(Int i2)
	{
		return checkit(long double(i) / long double(i2));
	}
	Int checkit(long double answer)
	{
		if (answer > 2147483647.0L || answer < -2147483647.0L)
		{
			cout << "ERROR!!!!";
			exit(1);
		}
		return Int(int(answer));
	}
};

int main()
{
	Int alpha = 20;
	Int beta = 7;
	Int delta, gamma;
	gamma = alpha + beta;
	cout << "\ngamma = ";
	gamma.putInt();
	gamma = alpha - beta;
	cout << "\ngamma = ";
	gamma.putInt();
	gamma = alpha * beta;
	cout << "\ngamma = ";
	gamma.putInt();
	gamma = alpha / beta;
	cout << "\ngamma = ";
	gamma.putInt();
	delta = 2147483647;
	gamma = delta + alpha;
	delta = -214748647;
	gamma = delta - alpha;
	cout << endl;
	return 0;
}