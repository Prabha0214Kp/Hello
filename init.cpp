#include<iostream>
using namespace std;

class test
{
	int &t;

	public:

	test(int &t) : t(t)
	{
	}


	int gett()
	{
		return t;
	}
};

int main()
{
	int x=20;
	test t1(x);
	cout<<t1.gett()<<endl;
	x=30;
	cout<<t1.gett()<<endl;

	return 0;
}




