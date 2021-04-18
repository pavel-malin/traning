#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double n, a;
	char ch, d;
	ch = 'y';


	while (ch != 'n')
	{
		cout << "Enter the first, operation and second operand: ";
		cin >> n >> d >> a;
		switch (d)
		{
		case '/':
			
			cout << n << " / " << a << endl;
			cout << "The result is: " << n / a << endl;
			cout << "Do one more operaion (y/n)? ";
			cin >> ch;
			break;
		case '+':
			cout << n << " + " << a << endl;
			cout << "The result is: " << n + a << endl;
			cout << "Do one more operaion (y/n)? ";
			cin >> ch;
			break;
		case '*':
			
			cout << n << " * " << a << endl;
			cout << "The result is: " << n * a << endl;
			cout << "Do one more operaion (y/n)? ";
			cin >> ch;
			break;
		case '-':

			cout << n << " - " << a << endl;
			cout << "The result is: " << n - a << endl;
			cout << "Do one more operaion (y/n)? ";
			cin >> ch;
			break;
		default:
			ch = 'n';
			break;
		}
	}
	return 0;
}