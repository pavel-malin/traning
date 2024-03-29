// handles errors during input and output
#include<fstream> // for file streams
#include<iostream>

using std::ofstream; // using namespace std;
using std::ifstream;
using std::ios;

using std::cout;
using std::endl;

#include<process.h> // for exit()

using std::exit;

const int MAX = 1000;
int buff[MAX];

int main()
{
	for (int j = 0; j < MAX; j++) // fill buffer with data
		buff[j] = j;
	ofstream os;	// create output stream
					// open it
	os.open("a:edata.dat", ios::trunc | ios::binary);
	if (!os)
	{
		cout << "Could not open output file\n";
		exit(1);
	}
	cout << "Writting...\n";  // write buffer to it
	os.write(reinterpret_cast<char*>(buff), MAX * sizeof(int));
	if (!os)
	{
		cout << "Could not write to file\n";
		exit(1);
	}
	os.close();

	for (int j = 0; j < MAX; j++)  // clear buffer
		buff[j] = 0;
	ifstream is;  // create input stream
	is.open("a:edata.dat", ios::binary);
	if (!is)
	{
		cout << "Could not open input file\n";
		exit(1);
	}
	cout << "Reading...\n";  // read file
	is.read(reinterpret_cast<char*>(buff), MAX * sizeof(int));
	if (!is)
	{
		cout << "Could not read from file\n";
		exit(1);
	}
	for (int j=0;j<MAX;j++)  // check data
		if (buff[j] != j)
		{
			cout << "\nData is incorrect\n";
			exit(1);
		}
	cout << "Data is correct\n";
	return 0;
}