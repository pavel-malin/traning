// writes formatted output to a file, using <<
#include<fstream> // for file I/O
#include<iostream>
#include<string>

using std::ofstream;

using std::cout; // using namespace std;
using std::endl;

using std::string;

int main()
{
	char ch = 'x';
	int j = 77;
	double d = 6.02;
	string str1 = "Kafka"; // string without
	string str2 = "Proust"; // embedded spaces

	ofstream outfile("fdata.txt"); // create ofstream object

	outfile << ch				// insert (wirte) data
		<< j
		<< ' '					// needs space berween numbers
		<< d
		<< str1
		<< ' '					// needs spaces between strings
		<< str2;
	cout << "File written\n";
	return 0;
}