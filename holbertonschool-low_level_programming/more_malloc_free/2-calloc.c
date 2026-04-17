#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, setting it to zero.
 * @nmemb: number of elements in the array.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int total_size, i;

	/** Check if either nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	/** Allocate memory*/
	arr = malloc(total_size);

	if (arr == NULL)
		return (NULL);

	/** Manually set the allocated memory to 0 (without memset)*/
	for (i = 0; i < total_size; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
