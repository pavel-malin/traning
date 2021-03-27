// input and delete. argument's 5/3

#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

string inputUser(vector<string> user);
string deleteUser();

// const int INDEX_LIST = 5;

int main()
{
	vector<string> userinput;

	inputUser(userinput);
	deleteUser();
	return 0;
}
string inputUser(vector<string> user)
{
	string input;
	cout << "input list: ";
	cin >> input;
	cout << "\n\n";
	user.insert(user.begin(), input);
}
string deleteUser()
{

}