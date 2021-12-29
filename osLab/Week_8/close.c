#include <stdio.h>
#include <fcntl.h>
#include <error.h>
#include <unistd.h>

int main(){
    int file = open("temp.txt", O_RDONLY);
    if(file < 0){
        perror("open");
        return 1;
    }
    else{
        close(file);
    }
}