#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: const character
 * Return:the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{

	int intNumber = 0, i = 0;

	if (b == NULL || *b == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/*shift the number left by 1 and add new digit*/
		intNumber = intNumber * 2 + (b[i] - '0');
		i++;
	}

	return (intNumber);



}
