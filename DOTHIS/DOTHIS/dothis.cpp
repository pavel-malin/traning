// how the this pointer refers to the data
#include<iostream>

using std::cout; // using namespace std;
using std::endl;

class what
{
private:
	int alpha;
public:
	void tester()
	{
		this->alpha = 11; // same as alpha = 11;
		cout << this->alpha; // same as cout << alpha;
	}
};

int main()
{
	what w;
	w.tester();
	cout << endl;
	return 0;
}