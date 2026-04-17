#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string.
 * @accept: The characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, len = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0') /* Loop through accept */

		{
			if (s[i] == accept[j]) /* Check if s[i] matches */

			{
				len++;
				break;
			}

			j++;
		}

		if (accept[j] == '\0') /* Stop if no match found */

			break;
		i++;
	}

	return (len);
}
