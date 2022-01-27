// checks for errors opening file
#include<fstream> // for file functions
#include<iostream>

using std::ifstream; // using namespace std;

using std::cout;
using std::endl;

int main()
{
	ifstream file;
	file.open("a:GROUP.DAT");

	if (!file)
		cout << "\nCan't open GROUP.DAT";
	else
		cout << "\nFile opened successfully.";
	cout << "\nfile = " << &file;
	cout << "\nError state " << file.rdstate();
	cout << "\ngood() = " << file.good();
	cout << "\neof() = " << file.eof();
	cout << "\nfail() = " << file.fail();
	cout << "\nbad() = " << file.bad();
	file.close();
	return 0;
}