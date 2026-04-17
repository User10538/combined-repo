#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list -  function that frees a list_t list.
 * @head: const list_t.
 * Return: number of nodes
 */
void free_list(list_t *head)
{

	list_t *free_list_temp;

	while (head != NULL)
	{
		free_list_temp = head;
		head = head->next;
		free(free_list_temp->str);
		free(free_list_temp);

	}
}
