#include<iostream>
#include<process.h>

using std::cout;
using std::endl;

using std::exit;

const int LIMIT = 100;

class safearray
{
private:
	int arr[LIMIT];
public:
	int& operator[](int n)
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "\nIndex ERROR!";
			exit(0);
		}
	}
};

int main()
{
	safearray sa1;

	for (int j = 0; j < LIMIT; j++)
	{
		sa1[j] = j * 10;
	}

	for (int j = 0; j < LIMIT; j++)
	{
		int temp = sa1[j];
		cout << "Element: " << j << " = " << temp << endl;
	}

	return 0;
}
