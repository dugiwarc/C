#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t wait_p, p[10], p_child;
    int status;
    for (int i = 0; i < 10; i++)
    {
        p[i] = fork();
        if (p[i] == 0)
        {
            p_child = getpid();
            exit(p_child % 10);
        }
        else if (p[i] == -1)
        {
            perror("fork");
        }
    }

    for (int i = 0; i < 10; i++)
    {
        wait_p = wait(&status);
        printf("Child with PID: %d", wait_p);
        if (WIFEXITED(status))
            printf(" terminated with STATUS: %d\n", WEXITSTATUS(status));
    }

    return (EXIT_FAILURE);
}
