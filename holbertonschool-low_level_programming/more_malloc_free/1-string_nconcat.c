#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * @n: integer
 *
 * Return: NULL or on failure or contains the contents of s1 and s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, len1 = 0, len2 = 0;
	char *new_string;

	/**if NULL is passed, treat it as an empty string*/

	if (s1 != NULL)
		while (s1[len1])
			len1++;

	if (s2 != NULL)
		while (s2[len2])
			len2++;

	/* Use at most `n` bytes from s2 */
	if (n < len2)
		len2 = n;

	/* Allocate memory for concatenated string (+1 for null terminator) */

	new_string = malloc(len1 + len2 + 1);

	if (new_string == NULL)
		return (NULL);

	/* Copy s1 to new_string */
	for (i = 0; i < len1; i++)
		new_string[i] = s1[i];

	/* Copy s2 to new_string */
	for (j = 0; j < len2; j++, i++)
		new_string[i] = s2[j];

	/* Null-terminate the new string */
	new_string[i] = '\0';

	return (new_string);
}
