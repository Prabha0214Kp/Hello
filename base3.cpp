#include<iostream>
using namespace std;

class test
{
	int x;
	public:
		test()
		{

		}

		test(int x) : x(x)
		{

		}

		test (const test& obj)=delete;
		test& operator = (const test& obj)=delete;
};

int main()
{
	test t(10);
	test t2=t1;
}
		

