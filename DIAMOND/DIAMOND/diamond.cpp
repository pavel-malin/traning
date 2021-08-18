#include<iostream>

using std::cout;

class A
{
public:
	void func();
};

class B : public A
{};

class C : public A
{};

class D : public B, public C
{};

int main()
{
	D objD;
	//objD.func(); ERROR
	return 0;
}