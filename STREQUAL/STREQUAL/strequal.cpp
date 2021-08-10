#include<iostream>
#include<string.h>

using std::cout;
using std::cin;
using std::endl;

using std::string;
using std::strcpy;
using std::strcmp;


class String
{
private:
	enum { SZ = 80 };
	char str[SZ];
public:
	String()
	{
		strcpy_s(str, ""); 
	}
	String(char s[])
	{
		strcpy_s(str, s);
	}
	void display() const
	{
		cout << str;
	}
	void getdist()
	{
		cin.get(str, SZ);
	}
	bool operator==(String ss) const
	{
		return (strcmp(str, ss.str) == 0) ? true : false;
	}
};

int main()
{
	char ss1[] = "yes"; // ERROR C2440
	String s1 = ss1;
	char ss2[] = "no"; // ERROR C2440
	String s2 = ss2;
	String s3;

	cout << "\nInput 'yes' or 'no': ";
	s3.getdist();
	if (s3 == s1)
		cout << "You input 'yes'\n";
	else
		if (s3 == s2)
			cout << "You input 'no'\n";
		else
			cout << "Follow the instructions!\n";

	return 0;
}