#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	char *tothe_end = s;

	while (*tothe_end != '\0')
		tothe_end++;

	while (tothe_end > s)
	{
		tothe_end--;
		_putchar(*tothe_end);
	}

	_putchar('\n');
}

