#include<iostream>
#include<string.h>
using namespace std;

class stu
{
	int rollno;
	char *name;
	int len;

	public:
	stu()
	{
		len=0;
		rollno=0;
		name=new char[50];
	}

	void read()
	{
		char *str;
		str=new char[50];

		cout<<"enter the rollno: ";
		cin>>rollno;
		cout<<"enter the str: ";
		cin>>str;

		name=new char[50];
		strcpy(name,str);
	}

	void print()
	{
		cout<<"name: "<<name<<" "<<"rollno: "<<rollno<<endl;
	}
};

int main()
{
	stu *s[2];
	int i=0;

	for(i=0;i<2;i++)
	{
		s[i]=new stu;
		s[i]->read();
	}

	for(i=0;i<2;i++)
	{
		s[i]->print();
	}

	return 0;
}

















