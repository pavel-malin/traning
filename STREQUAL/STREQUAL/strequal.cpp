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
		strcpy(str, ""); // ERROR C4996
	}
	String(char s[])
	{
		strcpy(str, s); // ERROR C4996
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
	String s1 = "yes"; // ERROR C2440
	String s2 = "no"; // ERROR C2440
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