#include<stdio.h>
int main()
{
	char str[]="aabbccacdd";
	int i=0,j=0,count=0;
	int n=sizeof(str)/sizeof(str[0]);

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		if(j==n)
		{
			printf("%d%c ",count,str[i]);
			count=0;
		}
	}
	return 0;
}


