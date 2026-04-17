#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the
 * number of elements in a linked list_t list
 * @h: const list_t.
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/*count the node*/
		count++;

		/*move to the next node*/
		h = h->next;
	}

	return (count);

}
