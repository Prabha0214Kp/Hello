#include <stdio.h>
#include <unistd.h>
#include <string.h>

char msg[20];
int main() 
{
	int p[2];
	char buffer[100];

	if (pipe(p) == -1) 
	{
		perror("pipe");
		return 1;
	}

	if(fork()==0)
	{

		printf("\nenter the str: ");
		scanf("%s^\n",msg);

		write(p[1], msg, strlen(msg)+1);
	}
	else
	{
		read(p[0], msg, 20);
		printf("Received message: %s\n", msg);
	}
	return 0;
}



