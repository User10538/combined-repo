#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints string
 * @separator: character
 * @n: integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n"); /* Print a newline at the end */
	va_end(ap);
}
