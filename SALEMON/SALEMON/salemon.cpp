#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;

using std::setw;
using std::setiosflags;
using std::setprecision;
using std::ios;

const int DISTRICTS = 4;
const int MONTHS = 3;

int main()
{
	int d, m;
	double sales[DISTRICTS][MONTHS];
	cout << endl;
	for (d = 0; d < DISTRICTS; d++)
		for (m = 0; m < MONTHS; m++)
		{
			cout << "Enter the sales volume for the department " << d + 1;
			cout << " , per month " << m + 1 << "; ";
			cin >> sales[d][m];
		}

	cout << "\n\n";
	cout << "Month\n";
	cout << "1  2   3";
	for (d = 0; d < DISTRICTS; d++)
	{
		cout << "\nDepartment " << d + 1;
		for (m = 0; m < MONTHS; m++)
			cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint)
			<< setprecision(2) << setw(10) << sales[d][m];
	}
	cout << endl;
	return 0;
}