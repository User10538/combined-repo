#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given in
 * @n: long int
 * @index: unsigned int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int range = sizeof(n) * 8;
	/*creates a mask with 1 at the index position*/
	unsigned long int mask = 1UL << index;

	/*check if index out of range*/
	if (index >= range)
		return (-1);

	/*set bit at index to 1 using bitwise OR*/
	*n |= mask;
	return (1);

}
