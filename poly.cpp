#include<iostream>
using namespace std;

class Complex
{
	int real, img;
	
	public:

	Complex(int r, int i)
	{
		real=r;
		img=i;
	}

	Complex operator + (Complex const &obj)
	{
		Complex res;

		res.real = real + obj.real;
		res.img = img + obj.img;

		return res;
	}

	void print()
	{
		cout<<real<<"+i"<<img<<endl;
	}
};

int main()
{
	Complex c1(10,5),c2(2,4);

	Complex c3 = c1 + c2;

	c3.print();

	return 0;
}



