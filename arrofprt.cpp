#include<iostream>
using namespace std;

class Myclass {
	private:
		int (*a)[3];
		int size;

	public:
		Myclass() {
			cout<<"Enter the size : ";
			cin>>size;

			a=new int[size][3];
			for(int i=0;i<size;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"Enter the element: ";
					cin>>a[i][j];
				}
				cout<<endl;
			}
		}

		void printValues() {
			cout<<"Array elements"<<endl;
			for(int i=0;i<size;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}

		~Myclass() 
		{
			delete[]a;
		}
};

int main()
{
	Myclass obj;
	obj.printValues();

	return 0;
}





