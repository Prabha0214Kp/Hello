#include<iostream>
using namespace std;

class stu
{
	int rollno;
	char name[20];

	public:

	void read()
	{
		cout<<"enter the rollno: ";
		cin>>rollno;
		cout<<"enter the name: ";
		cin>>name;
	}

	void print()
	{
		cout<<"rollno: "<<rollno<<" "<<"Name: "<<name<<endl;
	}
};

int main()
{
	stu s[2];
	int i;

	for(int i=0;i<2;i++)
	{
		s[i].read();
	}
	
	for(int i=0;i<2;i++)
	{
		s[i].print();
	}
	return 0;
}




