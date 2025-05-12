#include<iostream>
using namespace std;

class smptr
{
	int *ptr;

	public:

	smptr(int *p=NULL)
	{
		ptr=p;
	}

	~smptr()
	{
		delete ptr;
	}

	int& operator *()
	{
		return *ptr;
	}
};

int main()
{
	smptr p(new int(20));
	cout << *p <<endl;

	return 0;
}





