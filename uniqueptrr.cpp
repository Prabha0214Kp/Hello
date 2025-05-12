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
	unique_ptr<rectangle>p1(new rectangle(10,20));
	cout<<p1->area()<<endl;

	unique_ptr<rectangle>p2;
	p2=move(p1);

	cout<<p2->area()<<endl;
	return 0;
}




