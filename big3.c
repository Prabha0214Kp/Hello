#include<stdio.h>
int main()
{
	int limit=5, big3,big2,big1,num;

	while(limit)
	{
		scanf("%d",&num);

		if(num>big1)
		{
			big3=big2;
			big2=big1;
			big1=num;
		}
		else if(big3<num && big2>num)
		{
			big3=big2;
			big2=num;
		}
		else if(big2<num && big1>num)
		{	
			big2=num;
		}
		limit--;
	}
	printf("%d",big3);
	return 0;
}




