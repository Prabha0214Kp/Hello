#include<iostream>
using namespace std;

class Mul
{
	int val;
	public :
	Mul(int v) : val(v)
	{

	}

	int operator()(int b)
	{
		return val*b;
	}
};

int main()
{
	Mul m(12);
	cout<<m(10)<<endl;

	return 0;
}


