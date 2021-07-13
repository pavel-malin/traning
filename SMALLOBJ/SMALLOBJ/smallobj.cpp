#include<iostream>

using std::cout;
using std::endl;

class smallobj
{
private:
	int somedata;
public:
	void setdata(int d)
	{
		somedata = d;
	}
	void showdata()
	{
		cout << "The field value is " << somedata << endl;
	}
};

int main()
{
	smallobj s1, s2;
	s1.setdata(1066);
	s2.setdata(1776);
	s1.showdata();
	s2.showdata();
	return 0;
}