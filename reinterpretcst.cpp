#include<iostream>
using namespace std;

int main()
{
	int x=65;
	char *ch=reinterpret_cast<char*>(&x);
	cout<<"first byte of int to char: "<<*ch<<endl;
	return 0;
}

