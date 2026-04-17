#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * on each element of an array
 * @array: name of array.
 * @size: number of elements in the array
 * @cmp: pointer to the function you need to use
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/**If cmp returns non-zero (true)*/
		if (cmp(array[i]))
			return (i); /**Return the index of the first match*/
	}

	/**If no match is found, return -1*/
	return (-1);
}
