#include<iostream>
#include<memory>
using namespace std;

int main()
{
	unique_ptr<int>obj;
	int *ptr;

	obj.reset(new int);

	*obj=5;

	cout<<*obj<<endl;

	obj.reset(new int);

	*obj=10;

	cout<<*obj<<endl;

	ptr=obj.release();

	cout<<*ptr<<endl;

	delete ptr;

	return 0;
}


			

