#include<iostream>
using namespace std;

class test
{
	public:
		test()
		{
			cout<<"I am the constructer"<<endl;
		}
		virtual ~test()
		{
			cout<<"I am the destructer"<<endl;
		}
};

class test2 : public test
{
	public:
		test2()
		{
			cout<<"I am the constructer2"<<endl;
		}
		~test2()
		{
			cout<<"I am the destructer2"<<endl;
		}
};

int main()
{
	test *t = new test2;
	delete t;

	return 0;
}



