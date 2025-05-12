#include<iostream>
using namespace std;

class test
{
	int x;

	public:

	test(int x) : x(x)
	{

	}

	int gett()
	{
		return x;
	}
};

int main()
{
	test t1(10);
	cout<<t1.gett()<<endl;

	return 0;
}



