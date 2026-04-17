#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: const dlistint_t.
 * Return: number of nodes
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *free_list_temp;

	while (head != NULL)
	{
		free_list_temp = head;
		head = head->next;
		free(free_list_temp);
	}
}
