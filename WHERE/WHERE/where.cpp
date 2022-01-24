// this pointer
#include<iostream>

using std::cout;
using std::endl;

class where
{
private:
	char charray[10]; // Array of 10 bytes
public:
	void reveal()
	{
		// output address object
		cout << "\nMy address is not a house oe a street. my address is - " << this;
	}
};

int main()
{
	where w1, w2, w3; // create three objects
	// see where they are
	w1.reveal();
	w2.reveal();
	w3.reveal();
	cout << endl;
	return 0;
}