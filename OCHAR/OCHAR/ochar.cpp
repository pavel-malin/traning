// file output with characters
#include<fstream>  // for file functions
#include<iostream>
#include<string>

using std::ofstream; // using namespace std;

using std::cout; 
using std::endl;

using std::string;

int main()
{
	string str = "Time is great teacher, but unfortunately "
		"it kills all it pupils. Berlioz";

	ofstream outfile("TEXT.TXT"); //create file for output
	for (int j = 0; j < str.size(); j++)  // for each charater,
		outfile.put(str[j]);  // write it to file
	cout << "File written\n";
	return 0;
}