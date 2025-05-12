// program1.c
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
    char arr[100];

    mkfifo("/home/prakash/c++/file1", 0666);
    mkfifo("/home/prakash/c++/file2", 0666);

    int fd_write = open("/home/prakash/c++/file1", O_WRONLY);
    int fd_read = open("/home/prakash/c++/file2", O_RDONLY);

    printf("Process 1 PID: %d\n", getpid());

    if (fork()) {
        // Sender
        while (1) {
            printf("Enter message: ");
            fgets(arr, sizeof(arr), stdin);
            write(fd_write, arr, strlen(arr));
        }
    } else {
        // Receiver
        while (1) {
            int n = read(fd_read, arr, sizeof(arr));
            if (n > 0) {
                arr[n] = '\0';
                printf("Received from Process 2: %s", arr);
            }
        }
    }

    return 0;
}

