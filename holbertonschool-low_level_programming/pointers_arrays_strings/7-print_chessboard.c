#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard (8x8)
 *
 */


void print_chessboard(char (*a)[8])
{
	int row = 0, column;

	while (row < 8)
	{
		column = 0;

		while (column < 8)
		{
			_putchar(a[row][column]);
			column++;
		}

		_putchar('\n');
		row++;
	}
}
