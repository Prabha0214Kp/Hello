#include<iostream>
using namespace std;

class BigClass
{
	public:
	int _data;
};

void fun(BigClass& obj)
{
	obj._data;
}

int main()
{
	BigClass obj;
	fun(obj);
	return 0;
}






