#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>

/**
 * main - Super simple shell
 *
 * Return: Always 0
 */
int main(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    pid_t child_pid;
    int status;

    while (1)
    {
        printf("#cisfun$ ");
        read = getline(&line, &len, stdin);

        if (read == -1)  /* Ctrl+D or error */
        {
            printf("\n");
            break;
        }

        /* Remove newline character at the end */
        line[strcspn(line, "\n")] = '\0';

        child_pid = fork();
        if (child_pid == -1)
        {
            fprintf(stderr, "fork failed: %s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }

        if (child_pid == 0)
        {
            /* In child process */
            char *argv[] = {line, NULL};

            if (execve(line, argv, environ) == -1)
            {
                fprintf(stderr, "execve failed: %s\n", strerror(errno));
                exit(EXIT_FAILURE);
            }
        }
        else
        {
            /* In parent process */
            wait(&status);
        }
    }

    free(line);
    return (0);
}

