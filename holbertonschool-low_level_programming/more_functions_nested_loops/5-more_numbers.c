#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 *
 * Description: This function prints numbers from 0 to 14,
 * ten times, using _putchar and a while loop.
 */

void more_numbers(void)
{
	int i = 0, n;

	while (i < 10)
	{
		n = 0;

		while (n <= 14)
		{
			if (n >= 10)
				_putchar((n / 10) + '0'); /** print the first digit*/

					_putchar ((n % 10) + '0'); /** print the second */
			n++;

		}

		_putchar('\n');
		i++;

	}

}
