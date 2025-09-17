#include<stdio.h>
#include<unistd.h>

int main(){
    execlp("cat", "cat", "/proc/version", NULL);
    perror("Command has failed");
    return 1;
}