#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char.
 * @c: char
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size);

	if (size == 0 || arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = c;

	return (arr);

}
