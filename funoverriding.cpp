#include<iostream>
using namespace std;

class test
{
	protected:
		int x;
	public:
		test(int i) : x(i)
	{

	}

		void fun()
		{
			cout<< "fun () called"<<endl;
		}

		void fun() const
		{
			cout<< "const fun () called"<<endl;
		}
};

int main()
{
	test t(10);
	const test t2(20);

	t.fun();
	t2.fun();

	return 0;
}




