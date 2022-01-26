// file input with characters
#include<fstream> // for file functions
#include<iostream>

using std::ifstream; // using namespace std;

using std::cout;
using std::endl;

int main()
{
	char ch; // character to read
	ifstream infile("TEXT.TXT"); // create file for input
	while (infile)	// read until EOF or error
	{
		infile.get(ch);  // read character
		cout << ch; // display it
	}
	cout << endl;
	return 0;
}