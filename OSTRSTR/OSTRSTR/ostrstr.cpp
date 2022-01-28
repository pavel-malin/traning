// writes formatted data into memory
#include<strstream>
#include<iostream>
#include<iomanip>   // for setiosflags()

using std::strstream;  // using namespace std;

using std::cout;
using std::endl;
using std::ios;
using std::ends;

using std::setiosflags;
using std::setprecision;

const int SIZE = 80;

int main()
{
	char ch = 'x';   // test data
	int j = 77;
	double d = 67890.12345;
	char str1[] = "Kafka";
	char str2[] = "Freud";

	char membuff[SIZE];   // buffer in memory
	strstream omem(membuff, SIZE);  // create stream object

	omem << "ch=" << ch << "\n"  //  insert formatted data
		<< "j=" << j << "\n"  // into object
		<< setiosflags(ios::fixed)  // format with decimal point
		<< setprecision(2)      // two digits to right of dec
		<< "d=" << d << "\n"
		<< "str1=" << str1 << "\n"
		<< "str2=" << str2 << "\n"
		<< ends;  // end the buffer with '\0'
	cout << membuff;   //  display the memory buffer
	return 0;
}