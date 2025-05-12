#include<iostream>
using namespace std;

class shape
{
	public:
	virtual shape* clone()const=0;
	virtual void draw()const=0;
	virtual ~shape()
	{
	}
};

class circle : public shape
{
	double radius;

	public:
	circle(double r) : radius(r)
	{

	}

	shape* clone()const override
	{
		return new circle(*this);
	}

	void draw()const override
	{
		cout<<"Drawing a circle line with radius"<<radius<<endl;
	}
};

class rect : public shape
{
	double width,height;

	public:
	rect(double w,double h) : width(w),height(h)
	{

	}

	shape* clone()const override
	{
		return new rect(*this);
	}

	void draw()const override
	{
		cout<<"Drawing a rect line with width and height "<<width<<height<<endl;
	}
};

int main()
{
	circle c(5.0);
	rect r(4.0,6.0);

	shape *s1=c.clone();
	shape *s2=r.clone();

	s1->draw();
	s2->draw();

	return 0;
}



