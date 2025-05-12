#include<iostream>
using namespace std;

class A
{
	public:
	int a;
		void display()
		{
			cout<<"class A::a="<<a<<endl;
		}
};

class B : public A{
	public:
 	int b;
};      
class C : public A{
	public:
		int c;
};

class D : public B, public C{
	public :
		int d;
};

int main()
{
	D obj;
	obj.B::a=10;
	obj.C::a=20;
	obj.b=30;
	obj.c=30;
	obj.d=40;

	cout<<"B's A::a="<<obj.B::a<<endl;
	cout<<"C's A::a="<<obj.C::a<<endl;
	cout<<"b="<<obj.b<<endl;
	cout<<"c="<<obj.c<<endl;
	cout<<"d="<<obj.d<<endl;
	return 0;
}


	








