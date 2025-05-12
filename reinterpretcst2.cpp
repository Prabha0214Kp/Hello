#include<iostream>
using namespace std;

void func()
{
	cout<<"Hello from func()\n"<<endl;
}

int main()
{
	void (*fp)()=func;
	void *raw=reinterpret_cast<void*>(fp);
	void (*funcPtr)()=reinterpret_cast<void(*)()>(raw);

	funcPtr();
	return 0;
}



