#pragma warning(disable: 4996)
// String class with memory saving
// Overloaded assignment operator and // copy constructor
#include<iostream>
#include<cstring>  // _strcpy
#include<string>

using std::cout; // using namespace std;
using std::endl;

using std::strcpy;

class strCount  // Unique row counter class
{
private:
	int count; // Actually counter
	char* str; // Pointer to string
	friend class String; // Let's make ourselves  available
	// methods are hidden

	strCount(char* s) // constructor 1 arg.
	{
		int length = strlen(s); // len string arg
		char* str = new char[length + 1]; // Borrow memory
		strcpy(str, s); // copy argumments to it
		count = 1; // count from one
	}
	~strCount() // destructor
	{
		delete[] str; // delete line
	}
};

class String // Class String
{
private:
	strCount* psc; // pointer to strCount
public:
	String() // constructor not arg.
	{
		psc = new strCount(NULL);

	}
	String(char* s) // constructor 1 arg.
	{
		psc = new strCount(s);
	}
	String(String& S) // constructor copy
	{
		psc = S.psc;
		(psc->count)++;
	}
	~String() // destructor
	{
		if (psc->count == 1) // if last user
		{
			delete psc; // delete strCount
		}
		else  
		{
			(psc->count)--; // decrement counter
		}
	}
	void display() // output String
	{
		cout << psc->str; // output string
		cout << " (addr=" << psc << ")"; // output address 
	}
	void operator= (String& S) // String assignment 
	{
		if (psc->count == 1) // if last user
			delete psc; // delete strCount
		else
			(psc->count)--; // decrement counter 
		psc = S.psc; // using strCount arg.
		(psc->count)++; // increment counter
	}
};

int main()
{
	const char* ss = "The fly went across the field, the fly found the money";
	String s3 = ss; //C2440 
	//const char ss = "The fly went across the field, the fly found the money";
	//String s3;
	//s3 = ss;
 
	// output s3
	cout << "\ns3= ";
	s3.display();

	String s1; 
	s1 = s3; 
	// output s1
	cout << "\ns1= ";
	s1.display();

	String s2(s3); 
	// output s2
	cout << "\ns2= ";
	s2.display();

	cout << endl;
	return 0;

}