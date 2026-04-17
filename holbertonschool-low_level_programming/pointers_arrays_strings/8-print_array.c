#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to be printed
 *
 * Description: Prints the elements separated by a comma and space.
 * Ends with a newline character.
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (n > i)
	{
		printf("%d", a[i]); /**print the 1st element*/

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
