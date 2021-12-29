#include <stdio.h>
#include <fcntl.h>
#include <error.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

int main()
{
    struct stat st;
    stat("temp.txt", &st);
    printf("%o\n", st.st_mode);
    return 0;
}
