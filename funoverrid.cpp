#include<iostream>
using namespace std;

class rec
{
	float x,y;
	public:
	void read(float x, float y)
	{
		this->x=x;
		this->y=y;
	}

	void area()
	{
		cout<<"rev area : "<<x*y<<endl;
	}
};

class  tri : public rec
{
	float x,y;
	public:
	void read(float x, float y)
	{
		rec :: read(x,y);
		this->x=x;
		this->y=y;
	}

	void area()
	{
		rec :: area();
		cout<<"tri area : "<<0.5*x*y<<endl;
	}
};

int main()
{
	tri t;
	t.read(10,20);
	t.area();

	return 0;
}




