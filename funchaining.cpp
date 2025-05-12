#include<iostream>
using namespace std;

class MyClass
{
	int value;
	public:
	MyClass() : value(0)
	{

	}

	MyClass& add(int a)
	{
		value+=a;
		return *this;
	}
	MyClass& mul(int b)
	{
		value*=b;
		return *this;
	}

	void print()
	{
		cout<<"valu: "<<value<<endl;
	}
};

int main()
{
	MyClass obj;
	obj.add(10).mul(3).add(3).print();
	return 0;
}



