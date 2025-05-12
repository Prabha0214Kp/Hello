#include<stdio.h>
#include<stdbool.h>

struct st
{
	char c;
	int a;
	char b;
	bool d;
}s;

void fun(int *p)
{
	char *c=(char*)(p);
	printf("%c\n",*c);

	c++;
	printf("%d\n",*c);

	p++;
	char *b=(char*)(p);
	printf("%c\n",*b);

	char *d=(char*)(++b);
	printf("%d\n",*d);
}

int main()
{
	s.c='a';
	s.a=10;
	s.b='b';
	s.d=true;

	int *p=(int*)(&s);
	fun(p);

	return 0;
}


