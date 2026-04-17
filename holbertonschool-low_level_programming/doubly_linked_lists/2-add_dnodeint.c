#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function  that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: const dlistint_t.
 * @n: int
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_nodes;

	new_nodes = malloc(sizeof(dlistint_t));

	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = *head;

	/* If the list is not empty, set previous pointer of  old head*/
	if (*head != NULL)
	{
		(*head)->prev = new_nodes;
	}

	new_nodes->prev = NULL;
	*head = new_nodes;

	return (new_nodes);


}
