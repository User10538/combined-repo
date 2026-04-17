#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 *
 * @str: string
 *
 * Return: NULL or pointer to the duplicated string
 */

char *_strdup(char *str)
{

	char *arr;
	unsigned int i, size = 0;

	if (str == NULL)
	return (NULL);

	while (str[size])  /* Get the length of the string */
		size++;

	arr = malloc(size + 1); /* Allocate memory for string + '\0' */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++) /* Copy the string including '\0' */
		arr[i] = str[i];

	return (arr);
}
