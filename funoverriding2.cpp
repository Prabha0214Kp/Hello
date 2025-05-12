#include<iostream>
using namespace std;

void fun(const int& i)
{
	cout<<"fun (const int i) valled : "<<i<<endl;
}

void fun(int& i)
{
	cout<<"fun (int i) valled : "<<i<<endl;
}

int main()
{
	const int i = 10;
	fun(i);

	return 0;
}

















