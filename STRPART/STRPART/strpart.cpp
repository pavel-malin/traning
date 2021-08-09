#include<iostream>
#include<cstring>

using std::cout;
using std::endl;

using std::strcpy;


class part
{
private:
	char partname[30];
	int partnumber;
	double cost;
public:
	void setpart(char pname[], int pn, double c)
	{
		strcpy_s(partname, pname);
		partnumber = pn;
		cost = c;
	}
	void showpart()
	{
		cout << "\nName=" << partname;
		cout << ", number=" << partnumber;
		cout << ", cost=$" << cost;
	}
};

int main()
{
	part part1, part2;
	char c[] = "clutch";
	char cr[] = "crank";
	part1.setpart(c, 4473, 217.55); // error	c2664
	part2.setpart(cr, 9924, 419.25);  // error c2664
	cout << "\nOne detail: ";
	part1.showpart();
	cout << "\nTwo detail: ";
	part2.showpart();
	return 0;
}