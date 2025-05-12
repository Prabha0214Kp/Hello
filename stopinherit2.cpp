#include<iostream>
using namespace std;

class final
{
	final()
	{
	}
	friend class base;
};

class base : public final
{
	public:
		base()
		{
		}
};

class derived : public base
{
	public:
		derived()
		{
		}
};

int main()
{
	derived d;
	return 0;
}







		
