#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to which `src` will be appended
 * @src: The source string to append to `dest`
 *
 * Return: Pointer to the resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);


}
