#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s2 && (*s2 == *s1))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
