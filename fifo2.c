// program2.c
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    char arr[100];

    mkfifo("/home/prakash/c++/file1", 0666);
    mkfifo("/home/prakash/c++/file2", 0666);

    int fd_read = open("/home/prakash/c++/file1", O_RDONLY);
    int fd_write = open("/home/prakash/c++/file2", O_WRONLY);

    printf("Process 2 PID: %d\n", getpid());

    if (fork()) {
        // Receiver
        while (1) {
            int n = read(fd_read, arr, sizeof(arr));
            if (n > 0) {
                arr[n] = '\0';
                printf("Received from Process 1: %s", arr);
            }
        }
    } else {
        // Sender
        while (1) {
            printf("Enter message: ");
            fgets(arr, sizeof(arr), stdin);
            write(fd_write, arr, strlen(arr));
        }
    }

    return 0;
}






