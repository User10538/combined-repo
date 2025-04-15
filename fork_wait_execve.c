#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - Executes "ls -l /tmp" in 5 different child processes
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t pid;
    int i;
    int status;

    /* Arguments for execve */
    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
    extern char **environ; /* To pass environment to execve */

    for (i = 0; i < 5; i++)
    {
        pid = fork(); /* Create a child process */

        if (pid == -1)
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (pid == 0)
        {
            /* In child process */
            printf("Child %d: running 'ls -l /tmp'\n", i + 1);
            if (execve(argv[0], argv, environ) == -1)
            {
                perror("execve");
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            /* In parent process: wait for the child to finish */
            wait(&status);
            printf("Child %d finished.\n", i + 1);
        }
    }

    return (0);
}

