// Menu Chooser
// switch 

#include<iostream>
using namespace std;

int main()
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n";
	cout << "4 - Monster\n";
	cout << "5 - Demonic\n";
	cout << "6 - Hellish\n";
	cout << "7 - Devilish\n";
	cout << "8 - Underworld\n\n";

	int choice;

	cout << "Chioce: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "You picked Easy.\n";
		break;
	case 2:
		cout << "You picked Normal.\n";
		break;
	case 3:
		cout << "You picked Hard.\n";
		break;
	case 4:
		cout << "You picked Monster.\n";
		break;
	case 5:
		cout << "You picked Demonic.\n";
		break;
	case 6:
		cout << "You picked Hellish.\n";
		break;
	case 7:
		cout << "You picked Devilish.\n";
		break;
	case 8:
		cout << "You picked Underworld.\n";
		break;
	default:
		cout << "You made an illegal choice.\n";
	}
	return 0;
}