#pragma warning(disable: 4996)
// memory saving String class
#include<iostream>
#include<cstring> // for strcpy()

using std::cout; // using namespace std;
using std::endl;

class strCount // keep track of number
{			   // of unique strings
private:
	int count; // number of instances
	char* str; // pointer to string
	friend class String; // make ourselves available
	//
	strCount(char* s) // one-arg constructor
	{
		int length = strlen(s); // length of string argument
		str = new char[length + 1]; // get memory for string
		strcpy(str, s);  // copy argument to it
		count = 1; // start count at 1
	}
	~strCount() // destructor
	{
		delete[] str; // delete the string
	}
};

class String // String class
{
private:
	strCount* psc; // pointer to strCount
public:
	String() // no-arg constructor
	{
		psc = new strCount(NULL);
	}
	String(char* s) // 1-arg constructor
	{
		psc = new strCount(s);
	}
	String(String& S) // copy constructor
	{
		cout << "\nCOPY CONSTRUCTOR";
		psc = S.psc;
		(psc->count)++;
	}
	~String() // desctructor
	{
		if (psc->count = 1) // if we are its last user,
		{
			delete psc; // delete our strCount
		}
		else			// otherwise,
		{
			(psc->count)--; // decrement its count
		}
	}
	void display() // display the String
	{
		cout << psc->str; // print string
		cout << " (addr=" << psc << ")"; // print address
	}
	String& operator=(String& S) // assign the string
	{
		cout << "\n";
		if (psc->count == 1) // if we are its last user,
		{
			delete psc; // delete our strCount
		}
		else			// otherwise,
		{
			(psc->count)--; // decrement its count
		}
		psc = S.psc; // use argument's strCount
		(psc->count)++; // increment count
		return *this; // return this object
	}
};

int main()
{
	String s3 = "Whe the fox preaches, look to your geese.";
	// output s3
	cout << "\ns3= ";
	s3.display();

	String s1, s2; //
	s1 = s2 = s3;
	//output
	cout << "\ns1= ";
	s1.display();
	cout << "\ns2= ";
	s2.display();
	cout << endl;
	return 0;
}