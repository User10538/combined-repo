#include "main.h"
#include <stdio.h>

/**
 * string_toupper- change all lowercase to uppercase
 * @s: the char of the letters
 *
 * Return: the value is s.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}

		i++;
	}

	return (s);

}
