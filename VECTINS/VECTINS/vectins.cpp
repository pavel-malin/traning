// demostrates insert(), erase()
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int arr[] = { 100,110,120,130 };  // an array of ints
	
	vector<int> v(arr, arr + 4);  // intialize vector to array

	cout << "\nBefore isertion: ";
	for (int j = 0; j < v.size(); j++)  // display all elements
		cout << v[j] << ' ';

	v.insert(v.begin() + 2, 115);  // insert 115 at elements 2

	cout << "\nAfter insertion: ";
	for (int j = 0; j < v.size(); j++)  // display all elements
		cout << v[j] << ' ';
	
	v.erase(v.begin() + 2);   // erase element 2

	cout << "\nAfter erasuse: ";
	for (int j = 0; j < v.size(); j++)   // display all elements
		cout << v[j] << ' ';
	cout << endl;
	return 0;
}