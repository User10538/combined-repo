#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: name of array.
 * @size: size of the size_t
 * @action: pointer to the function you need to use
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);



}
