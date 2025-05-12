#include<iostream>
using namespace std;

class A
{
	int a;
	private:
		A()
		{
			cout<<"Constructer of A"<<endl;
		}
		friend class B;
};

class B
{
	A a1;
	public:
		B()
		{
			cin>>a1.a;
			cout<<a1.a<<endl;
			cout<<"Constructer of B"<<endl;
		}
};

int main()
{
	B b1;
	return 0;
}




