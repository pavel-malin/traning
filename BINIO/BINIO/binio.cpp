// binary input and output wih integers
#include<fstream>  // for file sreams
#include<iostream> 

using std::ofstream; // using namespace std;
using std::ifstream;
using std::ios;

using std::cout;
using std::endl;

const int MAX = 100; // size of buffer
int buff[MAX]; // buffer for integers

int main()
{
	for (int j = 0; j < MAX; j++)  // fill buffer with data
		buff[j] = j; // (0, 1, 2, ...)

	ofstream os("edata.dat", ios::binary);
	// write to it
	os.write(reinterpret_cast<char*>(buff), MAX * sizeof(int));
	// must close it
	os.close();
	
	for (int j = 0; j < MAX; j++) // erase buffer
		buff[j] = 0;

	// create input stream
	ifstream is("edata.dat", ios::binary);
	// read from it
	is.read(reinterpret_cast<char*>(buff), MAX * sizeof(int));
	
	// check data
	for (int j=0;j<MAX;j++)
		if (buff[j] != j)
		{
			cout << "Data is incorrect\n";
			return 1;
		}
	cout << "Data is correct\n";
	return 0;
}