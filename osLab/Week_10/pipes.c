#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MSGSIZE 10

char* msg1 = "Deepesh123";
char* msg2 = "Deepesh456";
char* msg3 = "Deepesh789";

int main(){
    char inpuf[MSGSIZE];
    int p[2], i;
    if(pipe(p) == -1){
        perror("pipe");
        exit(1);
    }
    
}