#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */

int _atoi(char *s)
{
	int signs = 1, new_int = 0, found_num = 0;


	/* Skip non-numeric characters and count thei signs */
	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			/**printf(%c, *s);*/
			signs = -signs;
		s++; /* Move to the next character */
	}

	/* Convert number while max and min */
	while (*s >= '0' && *s <= '9')
	{
		if (new_int > (INT_MAX / 10) || (new_int == (INT_MAX / 10)
		&& (*s - '0') > (INT_MAX % 10)))
			return ((signs == 1) ? INT_MAX : INT_MIN);

		new_int = new_int * 10 + (*s - '0');
		s++;
		found_num = 1;
	}

	return (found_num ? signs * new_int : 0);
	/**shorthand for an if-else statement*/
}

