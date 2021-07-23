#include<iostream>
#include<string>

using std::cout;
using std::endl;

using std::string;
using std::find;


int main()
{
	string s1 = "A Christmas tree was born in the forest, it grew in the forest.";
	int n;
	
	n = s1.find("Christmas tree");
	cout << "Found Christmas tree: " << n << endl;

	n = s1.find_first_of("Umka");
	cout << "The first from Umka: " << n << endl;

	n = s1.find_first_not_of("abcdfetABCDFET");
	cout << "The first one is not from: " << n << endl;
	return 0;
}