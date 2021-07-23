#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

int main()
{
	char charray[80];
	string word;

	cout << "Enter a word: ";
	cin >> word;
	int wlen = word.length();

	cout << "One character ";
	for (int j = 0; j < wlen; j++)
		cout << word.at(j);
	word.copy(charray, wlen, 0);
	charray[wlen] = 0;
	cout << "\nThe array contains: " << charray << endl;
	return 0;
}