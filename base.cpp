// WAP to prog
#include<iostream>
using namespace std;

class test
{
	public:
		test()
		{
		
		}

		test(int x)
		{
			x=x;
		}

	private:

		test(const test& obj)
		{
			x=obj.x;
		}
		test& operator = (const test& obj)
		{
			x=obj.x;
		}
};

int main()
{
	test t1(10);
	test t2(20);

	b1=b2;

	return 0;
}


