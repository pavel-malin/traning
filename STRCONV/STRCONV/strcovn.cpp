#include<iostream>
#include<string.h>

using std::cout;
using std::endl;

using std::strcpy;

class String
{
private:
	enum { SZ = 80 };
	char str[SZ];
public:
	String()
	{
		str[0] = '\x0';
	}
	String(char s[])
	{
		strcpy_s(str, s);
	}
	void display() const
	{
		cout << str;
	}
	operator char* ()
	{
		return str;
	}
};

int main()
{
	String s1;

	char xstr[] = "Hurray, comrades!";
	s1 = xstr;

	s1.display();
	

	String s2 = "We will win!"; // ERROR C2440
	cout << static_cast<char*>(s2);
	cout << endl;

	return 0;
}