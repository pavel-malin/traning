
// sorts array of strings with user-written comparison function
#include<iostream>
#include<string>   // for strcmp()
#include<algorithm>

using namespace std;

// array of strings
const char* names[] = { "George", "Penny", "Estelle",
				"Don", "Mike", "Bob" };

bool alpha_comp(const char*, const char*);  // declaration

int main()
{
	sort(names, names + 6, alpha_comp);   // sort the strings
	
	for (int j = 0; j < 6; j++)  // display sorted strings
		cout << names[j] << endl;
	return 0;
 }

bool alpha_comp(const char* s1,const char* s2)  // return true if s1<s2
{
	return (strcmp(s1, s2) < 0) ? true : false;
}