#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: long int
 */
void print_binary(unsigned long int n)
{
	int bit_position, started = 0;

	for (bit_position = sizeof(n) * 8 - 1; bit_position >= 0; bit_position--)
	{
		if ((n >> bit_position) & 1)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}

	}

	if (!started)
		putchar('0');
}

