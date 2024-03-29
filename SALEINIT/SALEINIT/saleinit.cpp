#include<iostream>
#include<iomanip>

using std::cout;
using std::endl;

using std::ios;
using std::setw;
using std::setiosflags;
using std::setprecision;

const int DISTRICTS = 4;
const int MONTHS = 3;

int main()
{
	int d, m;

	double sales[DISTRICTS][MONTHS] =
	{
		{1432.07, 234.50, 654.01},
		{322.00, 13838.32, 17589.88},
		{9328.34, 934.00, 4492.30},
		{12838.29, 2332.63, 32.93}
	};
	cout << "\n\n";
	cout << "Month\n";
	cout << "		1	  2	   3";
	for (d = 0; d < DISTRICTS; d++)
	{
		cout << "\nDepartment " << d + 1;
		for (m = 0; m < MONTHS; m++)
		{
			cout << setw(10) << setiosflags(ios::fixed) << setiosflags(ios::showpoint)
				<< setprecision(2) << sales[d][m];
		}
	}
	cout << endl;
	return 0;
}