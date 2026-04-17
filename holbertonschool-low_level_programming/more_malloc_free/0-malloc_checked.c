#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - Returns a pointer to the allocated memory
 *
 * @b: integer
 *
 * Return: status 98
 */

void *malloc_checked(unsigned int b)
{
	/**generic pointer type and  allocate b bytes of memory from the heap */
	void *ptr = malloc(b);

	if (ptr == NULL)

	/**  exits the process with status 98 using exit(98)*/
	exit(98);

	return (ptr);

}
