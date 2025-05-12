#include<iostream>
using namespace std;

class bank
{
	int acno;
	char name[20];
	float sal;

	public:
	void getbank()
	{
		cout<<"enter the acno, name, sal : ";
		cin>>acno>>name>>sal;
	}

	friend class loan;
};

class loan
{
	float emi,amt;

	public:

	void putdata(bank b)
	{
		cout<<"Enter the emi, amt : ";
		cin>>emi>>amt;

		cout<<"acno : "<<b.acno<<" "<<"Name : "<<b.name<<" "<<"b.sal : "<<b.sal<<endl;
	       cout<<"emi : "<<emi<<" "<<"amt : "<<amt<<endl;
	}
};

int main()
{
	bank b;
	b.getbank();

	loan l;
	l.putdata(b);
	return 0;
}




