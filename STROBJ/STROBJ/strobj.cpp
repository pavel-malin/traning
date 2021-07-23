#pragma warning(disable : 4996) // not errror strcpy();
#include<iostream>
#include<cstring>

using std::cout;
using std::endl;

using std::strcpy;
using std::strcat;

class String
{
private:
	enum { SZ = 80 };
	char str[SZ];
public:
	String()
	{
		str[0] = '\0';
	}
	String(char s[])
	{
		strcpy(str, s);
	}
	void display()
	{
		cout << str;
	}
	void concat(String s2)
	{
		if (strlen(str) + strlen(s2.str) < SZ)
		{
			strcat(str, s2.str);
		}
		else
		{
			cout << "\nOverflow!";
		}
	}
};

int main()
{
	String s1 ("Happy New Year!"); // error programming c2664
	String s2 = "With new happiness!"; // error programming c2440	
	String s3;
	cout << "\ns1=";
	s1.display();
	cout << "\ns2=";
	s2.display();
	cout << "\ns3=";
	s3.display();

	s3 = s1;
	cout << "\ns3=";
	s3.display();
	s3.concat(s2);
	cout << "\ns3=";
	s3.display();
	cout << endl;
	return 0;
}