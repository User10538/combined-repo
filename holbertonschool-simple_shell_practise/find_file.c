#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *path = getenv("PATH");      /* Get the PATH variable */
    char *dir;
    char full_path[1024];

    if (argc < 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        return (1);
    }

    dir = strtok(path, ":");  /* Split PATH by ':' */

    while (dir != NULL)
    {
        /* Build full path: directory + "/" + filename */
        snprintf(full_path, sizeof(full_path), "%s/%s", dir, argv[1]);

        /* Check if the file exists and is executable */
        if (access(full_path, X_OK) == 0)
        {
            printf("%s\n", full_path);
            return (0);  /* Found the file */
        }

        dir = strtok(NULL, ":");
    }

    printf("%s not found\n", argv[1]);
    return (1);
}

