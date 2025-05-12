#include<iostream>
using namespace std;

class test
{
	int *x;

	public:

	test(int a=0)
	{
		x=new int(a);
	}

	test& operator = (const test &t)
	{
		if(this!=(&t))
		{
			*x = *(t.x);
		}
		return *this;
	}

	void setvalue(int i)
	{
		*x = i;
	}

	void print()
	{
		cout<<*x<<endl;
	}
};

int main()
{
	test t1(10);
	test t2;

	t2 = t1;

	t1.setvalue(15);

	t2.print();

	return 0;    
}



