#include <stdio.h>

/**
 * main - prints all arguments without using ac
 * @av: array of arguments
 *
 * Return: Always 0.
 */
int main(__attribute__((unused)) int ac, char **av)
{
    int i = 0;

    while (av[i])
    {
        printf("%s\n", av[i]);
        i++;
    }

    return (0);
}

