// Die Roller

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	int die = (randomNumber % 6) + 1;
	cout << "You rolled a " << die << endl;
	cout << RAND_MAX << endl;
	return 0;
}