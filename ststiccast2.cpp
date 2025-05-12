#include<iostream>
using namespace std;

int main()
{
	int x=10;
	void *ptr=&x;

	int *p=static_cast<int*>(ptr);
	cout<<"Value through void* cast to int*: "<<*p<<endl;

	return 0;
}


