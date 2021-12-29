#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <error.h>
#include <unistd.h>

int main()
{
    int file = open("temp.txt", O_RDONLY);
    char *s = (char *)malloc(sizeof(char) * 100);
    if (file == -1)
    {
        perror("open");
        return 1;
    }
    else
    {
        int size = read(file, s, 10);
        s[size] = '\0';
        printf("%s\n", s);
    }
}