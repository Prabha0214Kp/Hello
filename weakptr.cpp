#include<iostream>
#include<memory>
using namespace std;

class rectangle
{
	int length;
	int breath;

	public:

	rectangle(int l, int b)
	{
		length=l;
		breath=b;
	}
	
	int area()
	{
		return length*breath;
	}
};

int main()
{
	shared_ptr<rectangle>p1(new rectangle(10,20));
	weak_ptr<rectangle>p2(p1);

	cout<<p2->area()<<endl;

	return 0;
}


