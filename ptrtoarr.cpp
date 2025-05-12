#include<iostream>
using namespace std;

class Myclass {
	private:
		int *a[3];
		int size;

	public:
		Myclass(int n) : size(n) {

			for(int i=0;i<3;i++)
			{
				a[i]=new int[size];
				for(int j=0;j<size;j++)
				{
					cout<<"Enter the element: ";
					cin>>a[i][j];
				}
				cout<<endl;
			}
		}

		void printValues() {
			cout<<"Array elements"<<endl;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<size;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}

		~Myclass() 
		{
			for(int i=0;i<size;i++)
			{
				delete[]a[i];
			}
		}
};

int main()
{
	Myclass obj(3);
	obj.printValues();

	return 0;
}





