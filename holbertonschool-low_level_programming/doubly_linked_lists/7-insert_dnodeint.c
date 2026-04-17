#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: const dlistint_t
 * @idx: int
 * @n: int
 * Return: address of new nodes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nodes, *temp = *h;
	unsigned int i = 0;

	new_nodes = malloc(sizeof(dlistint_t));

	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;
	new_nodes->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(new_nodes);
		return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_nodes->next = temp->next;
	new_nodes->prev = temp;

	if (temp->next)
		temp->next->prev = new_nodes;
	temp->next = new_nodes;

	return (new_nodes);
}
