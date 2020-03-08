#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{ 
    for(int i=0;i<10;i++)  
    { 
        if(fork() == 0) 
        { 
            printf("[SON] PID %d FROM [PARENT] PID %d\n",getpid(),getppid()); 
            exit(EXIT_FAILURE); 
        } 
    } 
    for(int i=0;i<10;i++) 
    	wait(NULL); 
} 
