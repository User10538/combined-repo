#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the square matrix
 * @size: Dimension of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + i * (size + 1));  /** Sum of primary diagonal*/
		sum2 += *(a + (i + 1) * (size - 1));  /** Sum of secondary diagonal*/
		i++;
	}

	printf("%d, %d\n", sum1, sum2);
}

