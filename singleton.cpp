#include<iostream>
using namespace std;

class Singleton
{
	static Singleton *ptr;

	Singleton()
	{

	}

	~Singleton()
	{
		delete ptr;
	}
	public:

	Singleton* getinstance()
	{
		if(!ptr)
		{
			ptr=new Singleton();
			cout<<"obj created"<<endl;
			return ptr;
		}
		return ptr;
	}
	void method()
	{
		cout<<"method fun"<<endl;
	}
};

Singleton* Singleton :: ptr=NULL;

int main()
{
	Singleton *s1,*s2;
	s1->getinstance();
	s2->getinstance();

	s1->method();
	s2->method();

	return 0;
}
	

