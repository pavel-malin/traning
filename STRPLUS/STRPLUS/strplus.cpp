#include<iostream>
#include<string.h>
#include<stdlib.h>

using std::cout;
using std::endl;

using std::strcpy;
using std::strcat;

using std::exit;

class String
{
private:
	//static const int SZ = 80;
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
	String operator+(String ss) const
	{
		String temp;
		if (strlen(str) + strlen(ss.str) < SZ)
		{
			strcpy_s(temp.str, str);
			strcat_s(temp.str, ss.str);
		}
		else
		{
			cout << "\nOveflow!";
			exit(1);
		}
		return temp;
	}
};

int main()
{
	char ss1[] = "\nMerry Christmas! ";
	String s1 = ss1; 
	s1.display();

	char ss2[] = "Happy New Year!";
	String s2 = ss2;
	s2.display();
	
	
	String s3;
	s3.display();
	
	s3 = s1 + s2;
	s3.display();
	cout << endl;

	return 0;
}