#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The multiplication table to print.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			if (j != 0) /* Print comma and spaces after the first number */
			{	_putchar(',');
				_putchar(' ');

				if (product < 10)
					_putchar(' '), _putchar(' ');
				else if (product < 100)
					_putchar(' ');
			}
			if (product >= 100) /* Print hundreds */
				_putchar((product / 100) + '0');
			if (product >= 10) /* Print tens */
				_putchar(((product / 10) % 10) + '0');
			_putchar((product % 10) + '0'); /* Print ones */
		}

		_putchar('\n');
	}
}

