#include<stdio.h>
int main()
{
	int a[]={2,4,7};
	int *p=a;
	++*p;
	*p++;
	++*p++;
	printf("%d %d %d\n",a[0],a[1],*p);
	return 0;
}


