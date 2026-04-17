#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: const dlistint_t
 * @index: int
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = temp->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;

	}

	/* If index is out of bounds */
	if (temp == NULL)
		return (-1);

	/* Adjust pointers to remove temp */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
