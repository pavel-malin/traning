#include<iostream>
#include<string.h>

using std::cout;
using std::endl;

using std::strcpy;


class String
{
protected:
	enum { SZ = 80 };
	char str[SZ];
public:
	String()
	{
		str[0] = '\0';
	}
	String(char s[])
	{
		strcpy_s(str, s);
	}
	void display() const
	{
		cout << str;
	}
	operator char*()
	{
		return str;
	}
};

class Pstring : public String
{
public:
	Pstring(char s[]);
	
};

Pstring::Pstring(char s[])
{	
	int j;
	if (strlen(s) > SZ - 1)
	{
		for (j = 0; j < SZ - 1; j++)
		{
			str[j] = s[j];
		}
		str[j] = '\0';
	}
	else
		String(s);
}

int main()
{
	char ss1[] = "This is a very, very long string, which, perhaps, yes, no, exactly - will exceed the size limited by SZ";
	Pstring s1 = ss1;

	cout << "\ns1= ";
	s1.display();

	char ss2[] = "And this is a short line.";
	Pstring s2 = ss2;
	
	cout << "\ns2= ";
	s2.display();
	
	cout << endl;
	return 0;
	
}