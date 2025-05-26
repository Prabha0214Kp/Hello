#include<stdio.h>

int atoi(const char str[])
{
	int i=0,result=0,sign=1;

	while(str[i]==' ')
	{
		i++;
	}

	if(str[i]=='-')
	{
		sign=-1;
		i++;
	}
	else if(str[i]=='+')
	{
		i++;
	}

	while(str[i]>='0' && str[i]<='9')
	{
		result = result*10+(str[i]-'0');
		i++;
	}
	return sign*result;
}


int main()
{
	char str[20];

	int num;

	printf("Enter the str : ");
	scanf("%s",str);

	num = atoi(str);

	printf("Integer value : %d\n",num);

	return 0;
}


