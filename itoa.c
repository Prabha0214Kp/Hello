#include<stdio.h>

void itoa(int num, char str[])
{
	int i=0;
	int isNegative=0;

	if(num==0)
	{
		str[i++]='0';
		str[i]='\0';
		return;
	}

	if(num<0)
	{
		isNegative=1;
		num=-num;
	}

	while(num!=0)
	{
		int digit=num%10;
		str[i++]=digit+'0';
		num=num/10;
	}

	if(isNegative)
	{
		str[i++]='-';
	}
	str[i]='\0';
	
	int start=0;
	int end=i-1;

	for(start=0;start<end;end--)
	{
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
	}
}

int main()
{
	char str[20];
	int num;

	printf("enter the num : ");
	scanf("%d",&num);

	itoa(num,str);

	printf("ASCII string: %s\n", str);


	return 0;
}
