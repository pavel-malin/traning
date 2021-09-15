#include<iostream>
#include<cstring>

using std::cout;
using std::endl;

using std::strlen;
using std::strcpy;

class String
{
private:
	char* str;
public:
	String(char* s)
	{
		int length = strlen(s);
		str = new char[length + 1];
		strcpy_s(str, 81, s);
	}
	~String()
	{
		cout << "Delete the line\n";
		delete[] str;
	}
	void display()
	{
		cout << str << endl;
	}
};

int main()
{
	char ss[] = "The quiter you go, the further you'll get.";
	String s1 = ss;
	cout << "s1 = ";
	s1.display();

	return 0;
}