#include "main.h"
#include <stddef.h>

/**
 * _puts - returns the length of a string
 * @str: the string tobe printed
 *
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}

		_putchar('\n');
	}

}
