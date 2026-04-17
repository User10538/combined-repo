#include <stdio.h>

extern char **environ;

char *_getenv(const char *name);

int main(void)
{
    char *value = _getenv("HOME");

    if (value)
        printf("HOME = %s\n", value);
    else
        printf("Environment variable not found.\n");

    return 0;
}

