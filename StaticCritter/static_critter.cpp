// Static Critter

#include<iostream>

using std::cout;
using std::endl;

class Critter
{
public:
	static int s_Total;
	Critter(int hunger = 0);
	static int GetTotal();
private:
	int m_Hunger;
};

int Critter::s_Total = 0;
Critter::Critter(int hunger):
m_Hunger(hunger)
{
	cout << "A critter has been born!" << endl;
	++s_Total;
}

int Critter::GetTotal()
{
	return s_Total;
}

int main()
{
	cout << "The total number of critters is: ";
	cout << Critter::s_Total << "\n\n";
	Critter crit1, crit2, ctit3;
	cout << "\nThe total number of critters is: ";
	cout << Critter::GetTotal() << "\n";
	return 0;
}