#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end -  function that adds a new node at the end.
 * @head: const list_t.
 * @str: char
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodes, *temp;
	unsigned int len = 0;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	new_nodes = malloc(sizeof(list_t));

	if (new_nodes == NULL)
		return (NULL);

	new_nodes->str = strdup(str);

	if (new_nodes->str == NULL)
	{
		free(new_nodes);
		return (NULL);
	}

	new_nodes->len = len;

	new_nodes->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodes;
		return (new_nodes);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_nodes;

	return (new_nodes);
}
