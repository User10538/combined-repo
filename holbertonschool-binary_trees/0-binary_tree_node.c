#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_node -  function that creates a binary tree node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Allocate memory for new nodes*/
	binary_tree_t *new_nodes = malloc(sizeof(binary_tree_t));

	if (new_nodes == NULL) /**check if allocation works*/
		return (NULL);

	/*initialise the node with given value*/
	new_nodes->n = value;
	new_nodes->parent = parent;
	new_nodes->left = NULL;
	new_nodes->right = NULL;

	return (new_nodes);
}

