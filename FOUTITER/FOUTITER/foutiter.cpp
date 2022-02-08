// demonstrates ostream_iterator with files
#include<fstream>
#include<algorithm>
#include<algorithm>
#include<list>

using namespace std;

int mai()
{
	int arr[] = { 11,21,31,41,51 };
	list<int> theList;

	for (int j = 0; j < 5; j++)  // transfer array to list
		theList.push_back(arr[j]);
	ofstream outfile("ITER.DAT");  // create file object

	ostream_iterator<int> ositer(outfile, " ");  // iterator 
									// write list to file
	copy(theList.begin(), theList.end(), ositer);
	return 0;
}