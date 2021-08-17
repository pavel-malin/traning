#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

class Type
{
private:
	string dimensions;
	string grade;
public:
	Type() : dimensions("N/A"), grade("N/A")
	{}
	Type(string di, string gr) : dimensions(di), grade(gr)
	{}
	void gettype()
	{
		cout << "Enter nominal dimrnsiond(2x4, ect): ";
		cin >> dimensions;
		cout << "Enter the grabe(untreated, timber, ect): ";
		cin >> grade;
	}
	void showtype() const
	{
		cout << "\nThe size: " << dimensions;
		cout << "\nVariety: " << grade;
	}
};

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0)
	{}
	Distance(int ft, float in) : feet(ft), inches(in)
	{}
	void getdist()
	{
		cout << "Enter feet: ";
		cin >> feet;
		cout << "Enter inches: ";
		cin >> inches;
	}
	void showdist() const
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

class Lumber : public Type, public Distance
{
private:
	int quantity;
	int price;
public:
	Lumber() : Type(), Distance(), quantity(0), price(0)
	{}
	Lumber(string di, string gr,
		int ft, float in,
		int qu, float prc) :
		Type(di, gr),
		Distance(ft, in),
		quantity(qu), price(prc)
	{}
	void getlumber()
	{
		Type::gettype();
		Distance::getdist();
		cout << "Enter quantity: ";
		cin >> quantity;
		cout << "Enter the price: ";
		cin >> price;
	}
	void showlumber() const
	{
		Type::showtype();
		cout << "\nLength: ";
		Distance::showdist();
		cout << "\nPrice " << quantity << " Things: " << (price * quantity) << " rubles";

	}
};

int main()
{
	Lumber siding;
	cout << "\nUpholstery information:\n";
	siding.getlumber();

	Lumber studs("2x4", "const", 8, 0.0, 200, 4.5F);

	cout << "\nStitching";
	siding.showlumber();
	cout << "\nBeams";
	studs.showlumber();
	
	cout << endl;
	return 0;
}