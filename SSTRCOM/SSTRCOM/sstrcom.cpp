#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

int main()
{
	string aName = "Ivan";
	string userName;

	cout << "Enter your name: ";
	cin >> userName;
	if (userName == aName)
		cout << "Hello Ivan\n";
	else if (userName < aName)
		cout << "Your name goes to me Ivan\n";
	else
		cout << "Your name comes after the name Ivan\n";

	int n = userName.compare(0, 2, aName, 0, 2);
	cout << "The first letter of your name ";
	if (n == 0)
		cout << "match up ";
	else if (n < 0)
		cout << "go up ";
	else
		cout << "come after ";
	cout << aName.substr(0, 2) << endl;
	return 0;
}