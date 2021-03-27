// Simple Critter

#include<iostream>

using std::cout;

class Critter
{
public:
	int m_Hunger;
	void Greet();
};

void Critter::Greet()
{
	cout << "Hi, I'm a critter. My hunger level is " << m_Hunger << ".\n";
}

int main()
{
	Critter crit1;
	Critter crit2;
	crit1.m_Hunger = 9;
	cout << "crit1's hunger level is " << crit1.m_Hunger << ".\n";
	crit2.m_Hunger = 3;
	cout << "crit2's hunger level is " << crit2.m_Hunger << ".\n\n";
	crit1.Greet();
	crit2.Greet();
	return 0;
}