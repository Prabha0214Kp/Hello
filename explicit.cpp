#include<iostream>
using namespace std;

class Base
{
	int var;
	public:

	Base()
	{


	}

//	explicit Base(int a) : var(a)
	Base(int a) : var(a)
	{

	}

	void print()
	{
		cout<<var<<endl;	
	}
};

void fun(Base b)
{
	b.print();
}

int main()
{
	Base b(10);
	b.print();

	Base b2=20;
	b2.print();

	fun(b);
	fun(30);


	return 0;
}


