#include<iostream>
using namespace std;

class test
{
	int x,y;

	public:

	test(int a, int b)
	{
		x=a;
		y=b;
	}

//	tets(const test &p)
//	{
//		x=p.x;
//		y=p.y;
//	}
//
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

//	test t2=t1; 
	return 0;
}












