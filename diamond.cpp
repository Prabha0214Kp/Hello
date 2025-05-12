#include<iostream>
using namespace std;

class A
{
	public:
	void display()
	{
		cout<<"Class A"<<endl;
	}
};

class B : public A{
};
class C : public A{
};

class D : public B, public C{
};

int main()
{
	D d;
	d.B::display();
	d.C::display();

	return 0;
}










