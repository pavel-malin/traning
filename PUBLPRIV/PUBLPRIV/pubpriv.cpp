#include<iostream>

using std::cout;
using std::endl;

class A
{
private:
	int privdataA;
protected:
	int protdataA;
public:
	int pubdataA;
};

class B : public A
{
public:
	void funct()
	{
		int a;
	//	a = privdataA; // ERROR
		a = protdataA;
		a = pubdataA;
	}
};

class C : private A
{
public:
	void funct()
	{
		int a;
	//	a = privdataA; // ERROR
		a = protdataA;
		a = pubdataA;
	}
};

int main()
{
	int a;
	B objB;
//	a = objB.privdataA; // ERROR
//	a = objB.protdataA; // ERROR
	a = objB.pubdataA;

	C ObjC;
//	a = ObjC.privdataA; // ERROR
//	a = ObjC.protdataA; // ERROR
//	a = ObjC.pubdataA; // ERROR
	return 0;
}