#include<iostream>
using namespace std;

class A {
	public:
		int a;
		void display()
		{
			cout<<"Class A:a="<<a<<endl;
		}
};

class B : virtual public A {
	public:
		int b;
};

class C : virtual public A {
	public:
		int c;
};

class D : public B, public C {
	public:
		int d;
};

int main()
{
	D obj;
	obj.a=10;
	obj.b=20;
	obj.c=30;
	obj.d=40;
	
	cout<<"a="<<obj.a<<endl;
	cout<<"b="<<obj.b<<endl;
	cout<<"c="<<obj.c<<endl;
	cout<<"d="<<obj.d<<endl;

	obj.display();

	return 0;
}










