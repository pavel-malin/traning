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
	int& access(int n)
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
		sa1.access(j) = j * 10;
	}

	for (int j = 0; j < LIMIT; j++)
	{
		int temp = sa1.access(j);
		cout << "Element: " << j << " = " << temp << endl;
	}

	return 0;
}