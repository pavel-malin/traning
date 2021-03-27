// Inventory Referencer

#include<iostream>
#include<string>
#include<vector>

using namespace std;

string& refToElement(vector<string>& inventory, int i);

int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	cout << "Assigning the returned reference to another reference.\n";
	string& rStr = refToElement(inventory, 1);
	cout << "Sending the new reference to cout:\n";
	cout << rStr << "\n\n";
	cout << "Assigning th rerurned reference to a string object.\n";
	string str = refToElement(inventory, 2);
	cout << "Sending the new string object to cout:\n";
	cout << str << "\n\n";
	cout << "Altering an object through a returned reference.\n";
	rStr = "Healing Potion";
	cout << "Sending the altered object to cout:\n";
	cout << inventory[1] << endl;
	return 0;
}

string& refToElement(vector<string>& vec, int i)
{
	return vec[i];
}