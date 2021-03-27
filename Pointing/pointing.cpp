// Pointing

#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
	int* pAPointer;
	int* pScore = 0;
	int score = 1000;
	pScore = &score;
	cout << "Assigning &score to pScore\n";
	cout << "&scire is: " << &score << "\n";
	cout << "pScore is: " << pScore << "\n";
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Adding 500 to score\n";
	score += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Adding 500 to *pScore\n";
	*pScore += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Assignig &newScore to pScore\n";
	int newScore = 5000;
	pScore = &newScore;
	cout << "&newScore is: " << &newScore << "\n";
	cout << "pScore is: " << pScore << "\n";
	cout << "new Score is: " << newScore << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";
	cout << "Assigning &str to pStr\n";
	string str = "score";
	string* pStr = &str;
	cout << "str is: " << str << "\n";
	cout << "*pStr is: " << *pStr << "\n";
	cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
	cout << "pStr->size() is: " << pStr->size() << "\n";
	return 0;
}