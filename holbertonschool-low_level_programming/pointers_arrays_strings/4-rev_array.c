#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the content of the array of int.
 * @a: is the array
 * @n: is the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}

}
