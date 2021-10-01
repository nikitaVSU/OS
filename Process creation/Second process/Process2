#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    switch (fork())
    {
    case 0:
        printf("Hello from the child, my PID is: %d\n", getpid());
        break;
    default:
        printf("Hello from the parent, my PID is: %d\n", getpid());
        break;
    }
    return 0; 
}
