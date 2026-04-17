#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Description: This function prints a straight line of underscores (_)
 * followed by a newline. If n is 0 or less, it prints only a newline.
 */


void print_line(int n)
{

	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
