#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}

int fun(int (*ptr)(int,int))
{
	int c=ptr(1,2);
	return c;
}

int main()
{
	int c=fun(add);
	printf("%d\n",c);
	return 0;
}




