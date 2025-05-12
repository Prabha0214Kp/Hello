#include<iostream>
using namespace std;

template<class T>

void fun(T a)
{
	cout<<"Normal"<<endl;
}

template<>

void fun(int a)
{
	cout<<"spe"<<endl;
}

int main()
{
	fun<char>('a');
	fun<int>(10);
	fun<float>(10.4);
	return 0;
}



