#include<iostream>
#include<string>

using std::cout;
using std::endl;

using std::string;
using std::swap;

int main()
{
	string s1("Fish");
	string s2 = "Meat";
	string s3;

	s3 = s1;
	cout << "s3 = " << s3 << endl;

	s3 = "Nor " + s1 + " nor ";
	s3 += s2;
	cout << "s3 = " << s3 << endl;
	
	s1.swap(s2);
	cout << s1 << " no " << s2 << endl;
	return 0;
}