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
	void display()
	{
		cout << str;
	}
	String operator+=(String ss)
	{
		if (strlen(str) + strlen(ss.str) >= SZ)
		{
			cout << "\nOveflow!";
			exit(1);
		}
		strcat_s(str, ss.str);
		
		return String(str);
	}

};

int main()
{
	char ss1[] = "\nMerry Christmas!";
	String s1 = ss1;
	s1.display();

	char ss2[] = "Happy New Year!";
	String s2 = ss2;
	s2.display();

	String s3;
	s3.display();
	s3 = s1 += s2;
	s3.display();

	return 0;
}