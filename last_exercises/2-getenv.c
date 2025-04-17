#include <string.h>
#include <stdio.h>

extern char **environ;

char *_getenv(const char *name)
{
    int i = 0;

    while (environ[i])
    {
        /* Check if the environment variable matches the name */
        if (strncmp(environ[i], name, strlen(name)) == 0 && environ[i][strlen(name)] == '=')
        {
            return &environ[i][strlen(name) + 1];  /* Return the value after '=' */
        }
        i++;
    }

    return NULL;  /* If not found, return NULL */
}

