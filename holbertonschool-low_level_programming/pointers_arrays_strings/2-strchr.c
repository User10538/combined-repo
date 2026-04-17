#include <stdio.h>
#include "main.h"

/**
 * _strchr - locate char in string
 * @s: pointer to the string to be searched
 * @c: char to be located
 *
 * Return: Pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{

	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]); /** Return pointer to the first occurrence of c*/
		}
		i++;

	}
	if (c == '\0')
	{
		return (&s[i]);
	}

	return (NULL);
}
