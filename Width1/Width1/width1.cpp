#include<iostream>

using std::cout;
using std::endl;

int main()
{
	long pop1 = 4789426, pop2 = 274124, pop3 = 9761;
	setlocale(LC_ALL, "");
	cout << "Город " << "Нас." << endl
		<< "Москва " << pop1 << endl
		<< "Киров " << pop2 << endl
		<< "Угрюмовка " << pop3 << endl;
	return 0;
}