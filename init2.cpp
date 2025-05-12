#include<iostream>
using namespace std;

class test
{
	int x,y;

	public:
	test(int i=0, int j=0) : x(i),y(j)
	{

	}

	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};

int main()
{
	test t1(10,20);

	cout<<t1.getx()<<endl;
	cout<<t1.gety()<<endl;

	return 0;
}
