#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints number 0 to 9
 * not 2 and 4, followed by new line
 * Description: Prints 0 through 9 except 2 and 4 using _putchar.
 * It does not take any parameters and does not return anything.
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)

		if (n != '2' && n != '4')
			_putchar(n);
	_putchar('\n');
}
