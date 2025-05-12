#include<iostream>
#include<memory>
using namespace std;

class test
{
	public:
		void print()
		{
			cout<<"test class"<<endl;
		}
};

int main()
{
	unique_ptr<test>p1(new test);
	p1->print();
	cout<<p1.get()<<endl;

	return 0;
}


