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
	static const int SZ = 80;
	// enum {SZ=80};
	char str[SZ];
public:
	String()
	{
		strcpy(str, "");
	}
	String(char s[])
	{
		strcpy(str, s);
	}
	void display() const
	{
		cout << str;
	}
	String operator+(String ss) const
	{
		String temp;
		if (strlen(str) + strlen(ss.str) << SZ)
		{
			strcpy(temp.str, str);
			strcat(temp.str, ss.str);
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
	String s1 = "\nMerry Christmas! ";  // C4996 ERROR
	String s2 = "Happy New Year!"; // C4996 ERROR
	String s3;

	s1.display();
	s2.display();
	s3.display();
	
	s3 = s1 + s2;
	s3.display();
	cout << endl;

	return 0;
}