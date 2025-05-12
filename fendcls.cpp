#include<iostream>
using namespace std;

class test
{
	int x;
	friend class test2;
};

class test2
{
	public:
		test t1;
		void show()
		{
			cout<<"enter the x value : ";
			cin>>t1.x;
			cout<<t1.x<<endl;
		}
};

int main()
{
	test2 t2;
	t2.show();

	return 0;
}


