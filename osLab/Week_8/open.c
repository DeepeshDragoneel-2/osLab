#include <stdio.h>
#include <fcntl.h>
#include <error.h>

int main()
{
    int file = open("temp.txt", O_RDONLY | O_CREAT);
    if (file == -1)
    {
        perror("open");
        return 1;
    }
    else
    {
        printf("File opened successfully\n");
    }
}