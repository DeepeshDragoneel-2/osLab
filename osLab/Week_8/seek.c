#include <stdio.h>
#include <fcntl.h>
#include <error.h>
#include <unistd.h>

int main(){
    FILE *fp = fopen("temp.txt", "r");
    if(fp == NULL){
        perror("fopen");
        return 1;
    }
    else{
        fseek(fp, 0, SEEK_END);
        printf("%ld\n", ftell(fp));
    }
}