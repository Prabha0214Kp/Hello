// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Base
{
	public:

		virtual void show()
		{
			cout<<"Base class"<<endl;
		}
};
class Der : public Base
{
	public:

		void show()
		{
			cout<<"Der class"<<endl;
		}
};

int main() 
{
	Base b,*ptr;
	Der d;
	ptr=&d;
	ptr->show();
	cout<<"Der : "<<sizeof(d)<<endl;
	cout<<"Base : "<<sizeof(b)<<endl;
	cout<<"Base ptr : "<<sizeof(ptr)<<endl;

	return 0;
}
