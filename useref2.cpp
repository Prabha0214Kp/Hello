#include<iostream>
using namespace std;

class Base
{
	int x;
	public:
	virtual void print()
	{
		cout<<"Base"<<endl;
	}
};

class Derived : public Base
{
	int y;
	public:
	virtual void print()
	{
		cout<<"Derived"<<endl;
	}
};

void fun(Base& b)
{
	b.print();
}

int main()
{
	Derived d;
	fun(d);

	Base b;
	fun(b);
	return 0;
}
