#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	char *end = s;
	char temp;

	/** Move 'end' to the last character before '\0'*/

	while (*end != '\0')
		end++;

	end--; /** Move back to the last actual character*/

	/** Swap characters from start to end*/

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;

		s++;
		end--;
	}
}

