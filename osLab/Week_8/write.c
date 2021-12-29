#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <error.h>

int main()
{
    int file = open("temp.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (file == -1)
    {
        perror("open");
        return 1;
    }
    else
    {
        int size = write(file, "Dragoneel\n", 10);
        close(file);
    }
}