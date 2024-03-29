// seeks particular person in file
#include<fstream> // for file streams
#include<iostream>

using std::ifstream; // using namespace std;
using std::ios;

using std::cout;
using std::cin;
using std::endl;

class person  // class of persons
{
protected:
	char name[80];  // person's name
	int age;  // person's age
public:
	void getData() // get person's data
	{
		cout << "\n    Enter name: ";
		cin >> name;
		cout << "\n    Enter age: ";
		cin >> age;
	}
	void showData() // display person's data
	{
		cout << "\n    Name: " << name;
		cout << "\n    Age: " << age;
	}
};

int main()
{
	person pers;  // create person object
	ifstream infile; // create input file 
	infile.open("GROUP.DAT", ios::in | ios::binary); // open file

	infile.seekg(0, ios::end); // go to bytes from end
	int endposition = infile.tellg(); // find where we are
	int n = endposition / sizeof(person);  // number of persons
	cout << "\nThere are " << n << " persons in file";

	cout << "\nEnter person number: ";
	cin >> n;
	int position = (n - 1) * sizeof(person); // number time size
	infile.seekg(position);  // bytes from start
							// read one person
	infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	// display the person
	pers.showData();
	cout << endl;
	return 0;
}