#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: the input string
 * Return: the modified string
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i] != '\0')  /* First loop to traverse the input string */
	{
		j = 0;
		while (letters[j] != '\0' && s[i] != letters[j])
			/* Second loop check replacements */
			j++;

		if (letters[j] != '\0') /* If a match was found, replace it */
		{
			s[i] = numbers[j];
		}

		i++;
	}

	return (s);
}

