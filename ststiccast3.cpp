#include<iostream>
using namespace std;

class Base
{
	public:
		void showBase()
		{
			cout<<"Base class function"<<endl;
		}
};

class Derived : public Base
{
	public:
		void showDerived()
		{
			cout<<"Derived class cunction"<<endl;
		}
};

int main()
{
	Derived d;
	Base *Bptr=static_cast<Base*>(&d);
	Bptr->showBase();

	Derived *Dptr=static_cast<Derived*>(Bptr);
	Dptr->showDerived();

	return 0;
}

























