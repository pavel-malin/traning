#include<iostream>

using std::cout;
using std::cin;
using std::endl;

enum Suit{clubs, diamonds, hearts, spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
	int number;
	Suit suit;
public:
	card()
	{}
	card(int n, Suit s) : number(n), suit(s)
	{}
	void display();
	bool isEqual(card);
};

void card::display()
{
	if (number >= 2 && number <= 10)
	{
		cout << number;
	}
	else
		switch (number)
		{
		case jack:
			cout << "Jack ";
			break;
		case queen:
			cout << "Queen ";
			break;
		case king:
			cout << "King ";
			break;
		case ace:
			cout << "Ace ";
			break;
		}
	switch (suit)
	{
	case clubs:
		cout << " Clubs ";
		break;
	case diamonds:
		cout << "Diamonds ";
		break;
	case hearts:
		cout << "Hearts ";
		break;
	case spades:
		cout << "Spades ";
		break;
	}
}

bool card::isEqual(card c2)
{
	return (number == c2.number && suit == c2.suit) ? true : false;
}

int main()
{
	card temp, chosen, prize;
	int position;
	card card1(7, clubs);
	cout << "\nCard 1: ";
	card1.display();
	card card2(jack, hearts);
	cout << "\nCard 2: ";
	card2.display();
	card card3(ace, spades);
	cout << "\nCard 3: ";
	card3.display();
	prize = card3;
	cout << "Swap card 1 and 3.... ";
	temp = card3;
	card3 = card1;
	card1 = temp;
	cout << "Swap card 2 and 3.... ";
	temp = card3;
	card3 = card2;
	card2 = temp;
	cout << "Swap card 1 and 2..... ";
	temp = card2;
	card2 = card1;
	card1 = temp;
	cout << "\nWhat position(1,2 or 3) is now ";
	prize.display();
	cout << "? ";
	cin >> position;
	switch (position)
	{
	case 1:
		chosen = card1;
		break;
	case 2:
		chosen = card2;
		break;
	case 3:
		chosen = card3;
		break;
	}
	if (chosen.isEqual(prize))
		cout << "Right! You win! ";
	else
		cout << "Wrong. You lose. ";
	cout << "You have selected a card ";
	chosen.display();
	cout << endl;
	return 0;
}