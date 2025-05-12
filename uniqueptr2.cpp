#include<iostream>
#include<memory>
using namespace std;

struct st
{
	int a;
	int b;
};

int main()
{
	unique_ptr<st>obj1(new st);
	unique_ptr<st>obj2;

	obj1->a=10;
	obj1->b=20;

	obj2=move(obj1);

	if(obj1)
	{
		cout<< obj1->a <<","<< obj1->b <<endl;
	}
	
	if(obj2)
	{
		cout<< obj2->a <<" "<< obj2->b <<endl;
	}
	return 0;
}






