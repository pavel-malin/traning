// file input with characters
#include<fstream> // for file functions
#include<iostream>

using std::ifstream; // using namespace std;

using std::cout;
using std::endl;

int main()
{
	ifstream infile("TEXT.TXT");  // create file for input
	cout << infile.rdbuf();  // send its buffer to cout
	cout << endl;
	return 0;
}