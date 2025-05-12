#include<iostream>
using namespace std;
class Base
{
	int b_var;
	public:
	Base()
	{
		cout<<"Base constructor "<<endl;
	}
	~Base()
	{   
		cout<<"Base destructor "<<endl;
	}
};
int main()
{
	Base();		// It is create dummy Object.
//	~Base();
	return 0;
}
