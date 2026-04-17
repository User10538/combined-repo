#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: array of arguments (unused)
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Mark argv as unused */

	printf("%d\n", argc - 1);

	return (0);
}

