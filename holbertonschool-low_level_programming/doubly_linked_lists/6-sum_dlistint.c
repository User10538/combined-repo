#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: const dlistint_t.
 * Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);

}
