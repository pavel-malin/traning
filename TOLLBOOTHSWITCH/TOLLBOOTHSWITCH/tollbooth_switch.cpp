#include<iostream>
#include<conio.h> // _getche()

using std::cout;
using std::endl;


const int ESC = 27;
const double TOTAL = 0.50F;

class tollBooth
{
private:
	unsigned int car;
	double money;
public:
	tollBooth() : car(0), money(0)
	{}
	void payingCar()
	{
		car++;
		money += TOTAL;
	}
	void nopayCar()
	{
		car++;
	}
	void display()
	{
		cout << "\nCar: " << car << endl;
		cout << "Money: " << money << endl;
	}
};

int main()
{
	tollBooth toll;
	char ch1;
	cout << "Enter '1' - the cars 'cost and avto', '0' not cost: " << endl;
	 while ((ch1 = _getche()) != ESC)
	 {
		 switch (ch1)
		 {
		 case '1':
			 toll.payingCar();
			 break;
		 case '0':
			 toll.nopayCar();
			 break;
		 }
	 }
	toll.display();
	return 0;
}