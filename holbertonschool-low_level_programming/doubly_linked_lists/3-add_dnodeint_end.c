#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a n
 * ew node at the end of a dlistint_t list.
 * @head: const dlistint_t.
 * @n: int
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_nodes, *temp;

	new_nodes = malloc(sizeof(dlistint_t));

	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;

	/*this is when the list is empty, the new nodes becames head*/
	if (*head == NULL)
	{
		new_nodes->prev = NULL;
		*head = new_nodes;
		return (new_nodes);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/*Get new node at the end*/
	temp->next = new_nodes;
	new_nodes->prev = temp;

	return (new_nodes);

}
