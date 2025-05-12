#include<iostream>
using namespace std;

template<class T>
class MyClass
{
	static int a;
	public:
	void print()
	{
		cout<<typeid(T).name()<<": "<<++a<<endl;
	}
};
template<class T>
int MyClass<T>::a=0;

int main()
{
	MyClass <int> m,m2;
	m.print();
	m2.print();

	MyClass <float> f;
	f.print();

	return 0;
}




