#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The main string to search.
 * @accept: The characters to match.
 *
 * Return: A pointer to the first occurrence in s of any byte from accept,
 * or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0') /* Loop through s */
	{
		j = 0;

		while (accept[j] != '\0') /* Loop through accept */
		{

			if (s[i] == accept[j]) /* If match found */
				return (s + i); /* Return pointer to match */

			j++;
		}
		i++;

	}
	return (NULL); /* No match found */
}

