#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints number
 *
 * @n: unsigned int
 * @separator: character
 *
 * Return: returns 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));/* Print the next number */
		/* Print separator except after last number */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}

	printf("\n"); /* Print a newline at the end */
	va_end(ap);

}
