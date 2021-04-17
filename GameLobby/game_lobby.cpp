
/* 
*	Game Lobby simulates a game lobby - a waiting area for players (offline mode).
*	Creates a queue for waiting players.
*	After starting the simulation, the user of the program can choose one of four options:
*	add, remove, clear or exit the lobby.
*/

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::string;

// Represents the players waiting in the lobby.
class Player
{
public:
	Player(const string& name = ""); // constructor prototype
	string GetName() const;
	Player* GetNext() const;
	void SetNext(Player* next);
private:
	string m_Name;
	Player* m_pNext; // Pointer to the next player on the list
};

class Lobby
{	

	friend ostream& operator<<(ostream& os, const Lobby& aLobby); // operator overloading <<
public:
	Lobby(); 
	~Lobby(); //destructor definition
	void AddPlayer();
	void RemovePlayer();
	void Clear();
private:
	Player* m_pHead;
};

Player::Player(const string& name): // constructor declaration
	m_Name(name),
	m_pNext(0)
{}

Lobby::Lobby(): // constructor declaration
	m_pHead(0)
{}

Lobby::~Lobby()
{
	Clear();
}

Player* Player::GetNext() const
{
	return m_pNext;
}

int main()
{
	Lobby myLobby;
	int choice;
	do
	{
		cout << myLobby;
		cout << "\nGAME LOBBY\n";
		cout << "0 - Exit the program.\n";
		cout << "1 - Add a player to the lobby.\n";
		cout << "2 - Remove a player from the lobby.\n";
		cout << "3 - Clear the lobby.\n";
		cout << endl << "Enter choice: ";
		cin >> choice;
		switch (choice)
		{
		case 0: cout << "Good-bye.\n"; break;
		case 1: myLobby.AddPlayer(); break;
		case 2: myLobby.RemovePlayer(); break;
		case 3: myLobby.Clear(); break;
		default: cout << "That was not a valid choice.\n";
		}
	} 	while (choice != 0);
	return 0;
}

string Player::GetName() const
{
	return m_Name;
}

void Player::SetNext(Player* next)
{
	m_pNext = next;
}

void Lobby::AddPlayer()
{
	cout << "Please enter the name of the new Player: ";
	string name;
	cin >> name;
	Player* pNewPlayer = new Player(name);
	if (m_pHead == 0)
	{
		m_pHead = pNewPlayer;
	}
	else
	{
		Player* pIter = m_pHead;
		while (pIter->GetNext() != 0)
		{
			pIter = pIter->GetNext();
		}
		pIter->SetNext(pNewPlayer);
	}
}

void Lobby::RemovePlayer()
{
	if (m_pHead == 0)
	{
		cout << "The game lobby is empty.No one to remove!\n";
	}
	else
	{
		Player* pTemp = m_pHead;
		m_pHead = m_pHead->GetNext();
		delete pTemp;
	}
}

void Lobby::Clear()
{
	while (m_pHead != 0)
	{
		RemovePlayer();
	}
}

ostream& operator<<(ostream& os, const Lobby& aLobby) //operator overloading <<
{
	Player* pIter = aLobby.m_pHead;
	os << "\nHere's who's in the game lobby:\n";
	if (pIter == 0)
	{
		os << "The lobby is empty.\n";
	}
	else
	{
		while (pIter != 0)
		{
			os << pIter->GetName() << endl;
			pIter = pIter->GetNext();
		}
	}
	return os;
}