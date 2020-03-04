#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t p, wait_p, p_child, my_child;
	int status;
	switch(p = fork()){
		
		case 0:
			p_child = getpid();
			printf("PID %d\nPPID %d\n\n", p_child, getppid());
			exit(p_child % 10);
			break;
		case -1:
			puts("ERROR");
			break;
		default:
			wait_p = wait(&status);
			printf("MY CHILD: %d\n", wait_p);

			if(WIFEXITED(status))
				printf("CHILD EXIT STATUS: %d\n", WEXITSTATUS(status));
			else 
				exit(EXIT_FAILURE);			
			break;	
	}
	return(EXIT_SUCCESS);
}


