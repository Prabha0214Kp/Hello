#include<iostream>
using namespace std;

int main()
{
	int i = 10, j=5;

	int *ptr_i = &i;

	int *&ptr_ref = ptr_i;

	cout<<*ptr_ref<<endl;

	ptr_ref = &j;

	cout<<*ptr_ref<<endl;
}






