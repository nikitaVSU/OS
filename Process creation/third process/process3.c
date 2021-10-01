#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    printf("Hello from the child.c\n");
    printf("PID of New process is: %d\n", getpid());
    return 0; 
}
