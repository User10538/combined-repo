#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  function that adds a new node
 * at the beginning of a list_t list
 * @head: const list_t.
 * @str: char
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	new_nodes = malloc(sizeof(list_t));

	if (new_nodes == NULL)
		return (NULL);

	/*Duplicate the string*/
	new_nodes->str = strdup(str);

	if (new_nodes->str == NULL)
	{
		free(new_nodes);
		return (NULL);
	}

	/*Set string length*/

	new_nodes->len = len;
	new_nodes->next = *head;
	*head = new_nodes;

	return (new_nodes);

}
