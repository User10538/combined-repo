#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: space, tabulation, new line, ,, ;, ., !, ?,
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0, j = 0, capitalise = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z' && capitalise)
		{
			s[i] -= 32;
		}

		capitalise = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				capitalise = 1;
			}
		}

		i++;
	}

	return (s);
}
