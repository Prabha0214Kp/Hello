#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* getstring();

int main()
{
	char *str,*str2,*str3,*ptr=NULL;

	int l1=0,l2=0;

	printf("Enter the str :");
	str=malloc(20*sizeof(char));
//	str=getstring(str);
//	puts(str);
	gets(str);

	printf("Enter the substr: ");
	str2=malloc(10*sizeof(char));
//	str2=getstring(str2);
	gets(str2);

	printf("Enter the replace str: ");
	str3=malloc(10*sizeof(char));
//	str3=getstring(str3);
	gets(str3);
	
	ptr=str;

	l1=strlen(str2);
	printf("%d\n",l1);
	l2=strlen(str3);
	printf("%d\n",l2);

	while(ptr=strstr(str,str2))
	{
		memmove(ptr,ptr+l1,strlen(ptr+l1)+1);
		str=realloc(str,strlen(str)+l2+1);
		memmove(ptr+l2,ptr,strlen(ptr)+1);
		strncpy(ptr,str3,l2);
		ptr=ptr+strlen(str3);
	}
	printf("%s\n",str);
	return 0;
}

char* getstring(int l2)
{
	int i=0;
	char *p=NULL;
	do
	{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}


