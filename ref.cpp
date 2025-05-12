#include<iostream>
using namespace std;

int main()
{
	int i=10;
	int &ref=i;
	ref=20;
	cout<<i<<endl;
	return 0;
}
