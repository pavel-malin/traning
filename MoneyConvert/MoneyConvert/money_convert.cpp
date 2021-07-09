// struct sterling (pounds shillings pence = int) result = double 
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct sterling
{
	int pounds;
	int shillings;
	int pence;
	char ch;
};
struct INput
{
	int p;
	int s;
	int pe;
};

int main()
{
	sterling ster, ster1;
	INput inp, inp1;
	double result, input;
	do
	{
		cout << "pounds, shillings, pence: ";
		cin >> ster.pounds >> ster.shillings >> ster.pence;
		cout << "\npounds1, shillings1, pence1: ";
		cin >> ster1.pounds >> ster1.shillings >> ster1.pence;
		cout << "J" << ster.pounds << "." << ster.shillings << "." << ster.pence << endl;
		cout << "J" << ster1.pounds << "." << ster1.shillings << "." << ster1.pence << endl;

		result = ster.pounds, ster.shillings, ster.pence;
		input = ster1.pounds, ster1.shillings, ster1.pence;
		cout << "Result:" << result + input << endl;
		if (ster.pence + ster.pence > 11)
		{
			ster.pence += ster1.pence;
			ster.pence /= 12;
			ster.pounds = static_cast<int>(ster.pence);
			input = ster.pence - ster.pounds;
			ster.shillings += ster1.shillings;
			ster.shillings += ster.pounds;
			ster.pence = input;
			if (ster.shillings + ster1.shillings > 19)
			{
				ster.shillings /= 20;
				ster.pounds = static_cast<int>(ster.shillings);
				input = ster.shillings - ster.pounds;
				ster.pence += ster.pounds;
				ster.pence += ster1.pence;
				ster.shillings = input;
			}


		}
		cin >> ster.ch;
		cout << "J" << ster.pounds << "." << ster.shillings << "." << ster.pence << endl;
	} while (ster.ch != 'n');
	cout << "(y/n)? " << endl;
	return 0;
}