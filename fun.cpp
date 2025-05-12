#include<iostream>
using namespace std;

void fun(int val)
{
	cout<<"int val : "<<val<<endl;
}

void fun(double val)
{
	cout<<"double val : "<<val<<endl;
}

int main()
{
	fun(10);
	fun(10.5);

	return 0;
}
