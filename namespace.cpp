#include<iostream>
using namespace std;

namespace ns1
{
	int fun()
	{
		return 5;
	}
}

namespace ns2
{
	const int x=10;
	int fun()
	{
		return x*10;
	}
}

int main()
{
	cout<<ns1::fun()<<endl;
	cout<<ns2::fun()<<endl;
	cout<<ns2::x<<endl;
	return 0;
}


