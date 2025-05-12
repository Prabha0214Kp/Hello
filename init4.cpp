#include<iostream>
using namespace std;

class test
{
	int i;
	public:

	test (int arg)
	{
		i=arg;
		cout<<"a con called value : "<<i<<endl;
	}
};

class test2 
{
	test t;
	public:

	test2(int x) : t(x)
	{
		cout<<"test2 const : "<<x<<endl;
	}
};


int main()
{
	test2 t(10);

	return 0;
}




