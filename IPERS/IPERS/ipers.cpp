// read person object from disk
#include<fstream>  // for file streams
#include<iostream>

using std::ifstream; // using namespace std;
using std::ios;

using std::cout;
using std::endl;

class person   // class of persons
{
protected:
	char name[80]; // person's name
	short age;  // person's age
public:
	void showData()  // display person's data
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

int main()
{
	person pers;  // create person variable
	ifstream infile("PERSON.DAT", ios::binary); // create stream
	// read stream
	infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	pers.showData();
	return 0;
}