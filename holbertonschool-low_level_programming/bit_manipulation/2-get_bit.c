#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit - return the value of bit
 * @n: long int
 * @index: unsigned int
 * Return: vlaue of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int range = sizeof(n) * 8;

	/*check if index out of range*/
	if (index >= range)
		return (-1);

	/*extract and return teh bit at the index*/
	return ((n >> index) & 1);
}
