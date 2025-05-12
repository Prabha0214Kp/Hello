#include<iostream>
using namespace std;

class base final
{
	int x;

	public:

	base()
	{

	}
	base(int a)
	{
		x=a;
	}
};

class derived : public base
{
	int d;
	public:

	derived(int a, int b) : d(b)
	{

	}
};

int main()
{
	derived d(1,2);
	return 0;
}



