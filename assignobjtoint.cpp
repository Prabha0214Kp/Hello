#include<iostream>
using namespace std;

class text
{
	int value;
	public:
		text(int n) : value(n)
		{

		}
		operator int () const
		{
			return value;
		}
};

int main()
{
	text t(10);
	int num=t;

	cout<<num<<endl;
	return 0;
}
