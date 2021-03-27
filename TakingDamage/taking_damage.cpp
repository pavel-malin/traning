// Taking Damage

#include <iostream>

int radiation(int health);
using namespace std;

int main()
{
	int health = 80;
	cout << "You helth is " << health << "\n\n";
	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";
	health = radiation(health);
	cout << "After radiation exposure your health is " << health << "\n\n";
	health = radiation(health);
	cout << "After radiation exposure your health us " << health << "\n\n";
	return 0;
}

inline int radiation(int health)
{
	return (health / 2);
}