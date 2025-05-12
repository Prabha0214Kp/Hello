#include<iostream>
using namespace std;

template<class T>

class test
{
	public:
		test()
		{
			cout<<"general template obj"<<endl;
		}
};

template<>
class test <int>
{
	public:
		test()
		{
			cout<<"spe temp obj"<<endl;
		}
};

int main()
{
	test<int>a;
	test<char>b;
	test<float>c;
	return 0;
}



