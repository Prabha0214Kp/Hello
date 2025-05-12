#include<iostream>
using namespace std;

class base
{
	public:
		base()
		{

		}

	private:
		base(const base &obj)
		{

		}

		base& operator = (const base& obj)
		{

		}
};

class base2 : public base
{
 	int x;
	public:

	base()
	{
		x=0;
	}
	base(int x)
	{
		x=x;
	}
};

int main()
{
	base b1(10);
	base b2=b1;

	return 0;
}

	       

