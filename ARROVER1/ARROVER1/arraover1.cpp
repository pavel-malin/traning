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
	void pulet(int n, int elvalue)
	{
		if (n < 0 || n >= elvalue)
		{
			cout << "Index error!";
			exit(1);
		}
		arr[n] = elvalue;
	}
	int getel(int n) const
	{
		if (n < 0 || n >= LIMIT)
		{
			cout << "Index error!";
			exit(1);
		}
		return arr[n];
	}
};

int main()
{
	safearray sa1;
	
	for (int j = 0; j < LIMIT; j++)
	{
		sa1.pulet(j, j * 10);
	}

	for (int j = 0; j < LIMIT; j++)
	{
		int temp = sa1.getel(j);
		cout << "Element: " << j << " = " << temp << endl;
	}

	return 0;
}