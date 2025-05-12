#include<iostream>
using namespace std;

class test
{
	private:
		~test()
		{
			cout<<"destructer"<<endl;
		}

		friend void desttest(test *ptr);
	public:
		test()
		{
			cout<<"constructer"<<endl;
		}

};

void desttest(test *ptr)
{
	cout<<"dt2 "<<endl; 
	delete ptr;
}

int main()
{
	//	test *t = (test*) malloc(sizeof(test));

	//	test *t;	 

	//	test *t = new test();		// called constructer

	test *ptr =  new test;

	desttest(ptr);

	return 0;
}


