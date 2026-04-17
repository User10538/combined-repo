#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers from 0 to 9, followed by a new line.
 *
 * * Description: This function prints the digits 0 through 9 using _putchar.
 * It does not take any parameters and does not return anything.
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		_putchar(n);

	_putchar('\n');

}
