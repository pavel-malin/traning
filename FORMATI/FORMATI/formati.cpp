// reads formatted output from a file, using >>
#include<fstream>   // for file I/O
#include<iostream>
#include<string>

using std::ifstream;

using std::cout; // using namespace std;
using std::end;

using std::string;

int main()
{
	char ch;
	int j;
	double d;
	string str1;
	string str2;

	ifstream infile("fdata.txt");  // create ifstream object
								   // extract (read) data from it
	infile >> ch >> j >> d >> str1 >> str2;
	cout << ch  			// display the data
		<< j 
		<< str1 
		<< str2;
	return 0;
}