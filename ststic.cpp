#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a =42;
	double b =static_cast<double>(a);

	cout<<"Integer: "<<a<<endl;
	cout<<"Converted to double: "<<fixed<<setprecision(6)<<b<<endl;

	return 0;
}
