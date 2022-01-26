// file input with strings
#include<fstream> // for file functions
#include<iostream> 

using std::ifstream; // using namespace std;

using std::cout;
using std::endl;

int main()
{
	const int MAX = 80; // size of buffer
	char buffer[MAX]; // character buffer
	ifstream infile("TEXT.TXT"); // create file for input
	while (!infile.eof()) // until end-of-file
	{
		infile.getline(buffer, MAX); // read a line of text
		cout << buffer << endl; // display it
	}
	return 0;
}