#include<iostream>
using namespace std;

template<class T>

class charfinder
{
	public:
		charfinder(T a)
		{
			cout<<a<<" is not a valid char"<<endl;
		}
};

template<>
class charfinder <char>
{
	public:
		charfinder(T a)
		{
			cout<<a<<" is a valid char"<<endl;
		}
};

int main()
{
	charfinder<char>ch1('A');
	charfinder<int>ch2(10);
	charfinder<float>ch3(23.4);
	return 0;
}






