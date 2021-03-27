// Games Guess My Number

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int tries = 0;
	int guess;
	int secretNumber;
	cout << "\tWelcome to Guess My Number\n\n";
	cout << "Enter a guess. ";
	cin >> guess;
	
	do
	{	
		
		secretNumber = rand() % 100 + 1;
		++tries;
		cout << secretNumber << "\n";
		if (secretNumber > guess)
		{
			cout << "Too high!\n\n";
		}
		else if (secretNumber > guess)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (secretNumber != guess);
	return 0;
}