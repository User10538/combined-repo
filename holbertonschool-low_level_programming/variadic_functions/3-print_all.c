#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>


/**
 * print_all - this function prints anything that is passed in
 * @format: the characters that contains specifier
 *
 * Description: print_all prints everything
 */

void print_all(const char * const format, ...)
{
	print_t functions[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
	};

	int i, j, len = 4;
	va_list args;
	char *separator = "";

	va_start(args, format);
	i = 0;

	while (format && format[i])/*loop through array*/
	{
		j = 0;

		while (j < len && format[i] != (*(functions[j].specifier)))
			j++;

		/* check if input matches  format*/
		if (j < len)
		{
			printf("%s", separator);
			functions[j].print_func(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

/* functions for printing different datatypes*/
/**
 * print_char - print char
 * @arg: va list
 */
void print_char(va_list arg)
{
	char str;

	str = va_arg(arg, int);
	printf("%c", str);
}
/**
 * print_integer - print integer
 * @arg: va list
 */
void print_integer(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
 * print_float - print float
 * @arg: va list
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}
/**
 * print_string - print string
 * @arg: va list
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
		str = ("(nil)");
	printf("%s", str);
}
