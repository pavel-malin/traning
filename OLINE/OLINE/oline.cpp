// file output with strings
#include<fstream> // for file I/O

using std::ofstream; // using namespace std;

int main()
{
	ofstream outfile("TEXT.TXT"); // create file for output
								  // send text to file
	outfile << "I fear thee, ancient Mariner!\n";
	outfile << "I fear thy skinny hand\n";
	outfile << "And thou art long, and lank, and brown,\n";
	outfile << "As is the ribbed sea sand.\n";
	return 0;
}