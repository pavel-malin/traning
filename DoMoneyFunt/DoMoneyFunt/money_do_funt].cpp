#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	float decpounds;
	int pounds;
	float decfrac;
	float f, f1, d, d1, p, p1;
	char ch;
	do 
	{	
		cout << "f d, p:" << endl;
		cin >> f  >> d >> p; //f,f1 = funt; d,d1 = 
		cout << "f1, d1, p1: " << endl;//pensov(11); p,p1 = shiling(19) 
		cin >> f1 >> d1 >> p1;
		cout << "J" << f << "." << d << "." << p << endl;
		cout << "J" << f1 << "." << d1 << "." << p1 << endl;
		
		
		
		cout << "Result: " << f+f1 << "." << d+d1 << "." << p+p1 << endl;
		if (p+p1 > 11)
		{
			p += p1;
			p /= 12; // 
			pounds = static_cast<int>(p);
			decfrac = p - pounds;
			d += d1;
			d += pounds;
			p = decfrac;
			//d = static_cast<int>(decfrac);
			if (d+d1 > 19)
			{
				d /= 20;
				pounds = static_cast<int>(d);
				decfrac = d - pounds;
				f += pounds;
				f += f1;
				d = decfrac;

			}
		}
		
		
		
		cin >> ch;
		cout << "J" << f+f1 << "." << d << "." << p << endl;
	} while(ch != 'n');
	cout << "(y/n)? " << endl;
	return 0;
}