#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;


class sales
{
private:
	enum { SZ = 3 };
	float month[SZ];
public:
	void getdata();
	void putdata() const;
};

void sales::getdata()
{
	cout << "Enter the sales volume for 3 months: \n";
	for (int i = 0; i < SZ; i++)
	{
		cout << "Months: " << i + 1 << ":";
		cin >> month[i];
	}
}

void sales::putdata() const
{
	for (int i = 0; i < SZ; i++)
	{
		cout << "\nMonths sales" << i + 1 << ":";
		cout << month[i];
	}
}

class publicaction
{
	string namebook;
	float cost;
public:
	void getdata()
	{
		cout << "\nEnter name book: ";
		cin >> namebook;
		cout << "\nEnter cost book: ";
		cin >> cost;
	}
	void putdata() const
	{
		cout << "\nName book: " << namebook;
		cout << "\nConst book: " << cost;
	}
};

class book : private publicaction, private sales
{
private:
	int pages;
public:
	book() : pages(0)
	{}
	void getdata()
	{
		publicaction::getdata();
		cout << "Enter how many pages: ";
		cin >> pages;
		sales::getdata();
	}
	void putdata() const
	{
		publicaction::putdata();
		cout << "\nTotal pages: " << pages;
		sales::putdata();
	}
};

class type : private publicaction, private sales
{
private:
	float time;
public:
	type() : time(0.0)
	{}
	void getada()
	{
		publicaction::getdata();
		cout << "Enter audio book time: ";
		cin >> time;
		sales::getdata();
	}
	void putdata() const
	{
		publicaction::putdata();
		cout << "\nAudio book time: " << time;
		sales::putdata();
	}
};


int main()
{
	book book1;
	type type1;
	book1.getdata();
	type1.getada();
	book1.putdata();
	type1.putdata();
	
	cout << endl;
	return 0;
}