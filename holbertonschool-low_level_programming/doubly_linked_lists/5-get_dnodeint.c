#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the
 * nth node of a dlistint_t linked list.
 * @head: const dlistint_t.
 * @index: index of node, start at 0
 * Return: number of nodes
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*pointer get_nodes used to traverse the list.*/
	/* It starts at the head of the list*/
	dlistint_t *get_nodes = head;
	unsigned int count = 0;

	while (get_nodes != NULL)
	{
		if (count == index)
			return (get_nodes);

		get_nodes = get_nodes->next;
		count++;
	}

	return (NULL);






}
