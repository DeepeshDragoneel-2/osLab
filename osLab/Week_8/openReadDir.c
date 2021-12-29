#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <error.h>
#include <dirent.h>

int main()
{
    struct dirent *dir;
    DIR *dr = opendir(".");
    if (dr == NULL)
    {
        printf("Error");
    }
    else
    {
        while ((dir = readdir(dr)) != NULL)
        {
            printf("%s\n", dir->d_name);
        }
        closedir(dr);
    }
}