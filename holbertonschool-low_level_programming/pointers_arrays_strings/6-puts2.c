#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The input string.
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);

		str++;

		if (*str != '\0')

			str++;
	}

	_putchar('\n');
}
