/* input: i am a cpp Programmer.
output: i ma ppc remmargorp 

use char[] or char* or strlen etc.
don't use std::string */

#include <stdio.h>
#include <string.h>

void fun(char str[])
{
	int i=0,j=0,k=0;

	for(i=0;i<strlen(str)+1;i++)
	{
		if(str[i]==' ' || str[i]=='\0')
		{
			for(k,j=i-1; k<j; k++,j--)
			{
				char ch=str[k];
				str[k]=str[j];
				str[j]=ch;
			}
			k=++i;
		}
	}
	printf("reverse word is : %s\n",str);
}

int main() 
{
	char str[]="i am a cpp Programmer";

	fun(str);

	return 0;
}

















