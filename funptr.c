#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int main()
{
	int(*ptr)(int,int)=add;
	int c=ptr(1,2);
	printf("%d\n",c);
	return 0;
}


