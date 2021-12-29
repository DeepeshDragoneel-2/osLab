#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main()
{
    int fd = open("temp.txt", O_RDONLY | O_CREAT), fd2;
    if (fd2 == fcntl(fd, F_DUPFD, 0))
    {
        printf("%d\n", fd);
    }
    else
    {
        printf("FILE DESTINATION DUPLICATED");
    }
}