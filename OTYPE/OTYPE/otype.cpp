// imitates TYPE command
#include<fstream>  // for file functions
#include<iostream>

#include<process.h>  // for exit()

using std::ifstream;  // using namespace std;

using std::cout;
using std::endl;

using std::exit;

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		cout << "\nFormat: otype filename";
		exit(-1);
	}
	char ch;   // character to read
	ifstream infile;  // create file for input
	if (!infile)   // check for errors
	{
		cout << "\nCan't open " << argv[1];
		exit(-1);
	}
	while (infile.get(ch))  // read a character
	{
		cout << ch;
	}
	return 0;
}