// imitates print command
#include<fstream>  // for file functions
#include<iostream>

#include<process.h>  // for exit()

using std::ifstream;  // using namespace std;
using std::ofstream;

using std::cout;
using std::endl;

using std::exit;

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cout << "\nFormat: oprint filename";
		exit(-1);
	}
	char ch;  // character to read
	ifstream infile; // create file for input
	infile.open(argv[1]);  // open file
	if (!infile)  // check for errors 
	{
		cout << "\nCan't open " << argv[1];
		exit(-1);
	}
	ofstream outfile;  // make file 
	outfile.open("PRN");  // open it for printer
	while (infile.get(ch)) // read a character
		outfile.put(ch);  // write character to printer
	outfile.put('\x0C');  // formfeed to eject page
	return 0;
}