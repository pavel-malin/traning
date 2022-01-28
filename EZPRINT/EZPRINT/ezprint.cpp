// demonstrates simple output to printer 
#include<fstream>  // for file streams

using std::ofstream;  // using namespace std;
using std::endl;

int main()
{

	const char* s1 = "\nToday's winning number is ";
	int n1 = 17982;
	ofstream outfile;   // make a file
	outfile.open("PRN"); // open it for printer 
	outfile << s1 << n1 << endl;  // send data to printer
	outfile << '\x0C';  // formfeed tot eject page
	return 0;
}