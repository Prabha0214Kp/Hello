#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compressString(const char *input) 
{
	int count = 1;
	int len = strlen(input);

	for (int i = 1; i <= len; i++) 
	{
		if (input[i] == input[i - 1]) 
		{
			count++;
		} 
		else 
		{
			// Print count and character
			printf("%d%c", count, input[i - 1]);
			count = 1;  // Reset count
		}
	}
}

int main() 
{
	char input[] = "aabbccccddd";

	printf("Output: ");
	compressString(input);  // Output: 2a2b4c3d
	printf("\n");

	return 0;
}

