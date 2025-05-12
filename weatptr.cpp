#include<iostream>
#include<memory>
using namespace std;

struct B;		// forward declaration
class A
{
	public:
	shared_ptr<B>b_ptr;
	A()
	{
		cout<<"construct A"<<endl;
	}

	~A()
	{
		cout<<"destruct A"<<endl;
	}
};

class B
{
	public:
	weak_ptr<A>a_ptr;
	B()
	{
		cout<<"construct B"<<endl;
	}
	~B()
	{
		cout<<"destruct B"<<endl;
	}
};

int main()
{
	auto a=make_shared<A>();
	auto b=make_shared<B>();

	a->b_ptr=b;
	b->a_ptr=a;

	return 0;
}




