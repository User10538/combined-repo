#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copies memory area
 * @dest: dest memory area
 * @src:src memory area
 * @n: interger
 *
 * Return: Ponter return to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
