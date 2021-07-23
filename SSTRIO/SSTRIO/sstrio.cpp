#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;
using std::getline;

int main()
{
	string full_name, nickname, address;
	string greeting("Hello, ");
	
	cout << "Enter the you name: ";
	getline(cin, full_name);
	cout << "You name: " << full_name << endl;

	cout << "Enter the you nickname: ";
	cin >> nickname;
	
	greeting += nickname;
	cout << greeting << endl;

	cout << "Enter you address in several lines\n";
	cout << "End of input sumbol '$'\n";
	getline(cin, address, '$');
	cout << "You address: " << address << endl;
	return 0;
}