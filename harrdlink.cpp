#include <unistd.h>
#include <stdio.h>

int main() 
{
    int result = link("original.txt", "hardlink.txt");
    if (result == 0) 
    {
        printf("Hard link created successfully.\n");
    } 
    else 
    {
        perror("link");
    }
    return 0;
}

