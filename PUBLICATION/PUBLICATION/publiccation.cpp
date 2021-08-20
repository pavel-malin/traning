#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

class publication
{
private:
	string namebook;
	float cost;
public:
	void getdata()
	{
		cout << "\nEnter name book: ";
		cin >> namebook;
		cout << "Enter cost book: ";
		cin >> cost;
	}
	void putdata() const
	{
		cout << "\nName book: " << namebook;
		cout << "\nConst book: " << cost;
	}
};

class book : private publication
{
private:
	int pages;
public:
	book() : pages(0)
	{}
	void getdata()
	{
		publication::getdata();
		cout << "Enter how many pages: ";
		cin >> pages;
	}
	void putdata() const
	{
		publication::putdata();
		cout << "\nTotal pages: " << pages;
	}

};

class type : private publication
{
private:
	float time;
public:
	type() : time(0.0)
	{}
	void getdata()
	{
		publication::getdata();
		cout << "Enter audio book time: ";
		cin >> time;
	}
	void putdata() const
	{
		publication::putdata();
		cout << "\nAudio book time: " << time;
	}
};

int main()
{
	book b1;
	type t1;
	
	cout << endl;
	cout << " \tEnter book details:\n";
	b1.getdata();

	cout << "\nBook inforamtion:";
	b1.putdata();
	cout << endl;

	cout << " \tEnter the data for the audio book:\n";
	t1.getdata();

	cout << "\nAudio book information: ";
	t1.putdata();
	cout << endl;


	return 0;
}