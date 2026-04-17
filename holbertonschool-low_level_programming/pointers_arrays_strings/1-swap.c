#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be found.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
    int len = 0;

    while (*s) 
    {
        len++;
        s++; 
    }

    return len;
}

