// calculates of larget numbers using verylong class
#include "verulong.h"

int main()
{
	unsigned long numb, j;
	verylong fact = 1;  // intialize verylong

	cout << "\n\nEnter number: ";
	cin >> numb;    // input a long int

	for (j = numb; j > 0; j--)  // factorial is numb *
		fact = fact * j;  // numb -1 * numb -2 *
	cout << "Factorial is ";   // numb -3 and so on
	fact.putvl();    // display factial 
	cout << endl;
	return 0;
}