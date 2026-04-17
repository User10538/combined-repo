#include "main.h"

/**
 * print_triangle - Prints a triangle using the '#' character
 * @size: The size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;

	}

	for (i = 1; i <= size; i++) /**loop for each row*/
	{
		/** Print first so that the # character is align to the right side */
		for (spaces = size - i; spaces > 0; spaces--)
			_putchar(' ');


		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');
	}



}
