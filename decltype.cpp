#include<iostream>
using namespace std;

template<typename t1, typename t2>

auto add(t1 a, t2 b) -> decltype(a+b)
{
	return a+b;
}

int main()
{
	cout<<add(1,1.8)<<endl;
	cout<<add(1.8,1)<<endl;
	return 0;
}


