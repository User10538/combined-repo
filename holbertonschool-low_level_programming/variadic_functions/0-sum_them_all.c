#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: unsigned int
 *
 * Return: returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);


	if (n == 0)
		return (0);


}
