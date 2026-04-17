#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts
 * a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*Allocate memory for new nodes*/
	binary_tree_t *new_nodes;

	if (parent == NULL)
		return (NULL);

	new_nodes = malloc(sizeof(binary_tree_t));

	if (new_nodes == NULL) /**check if allocation works*/
		return (NULL);

	/*initialise the node with given value*/
	new_nodes->n = value;
	new_nodes->parent = parent;
	new_nodes->left = NULL;
	new_nodes->right = NULL;

	/*If parent already has a left child,shift existing left child*/
	if (parent->left != NULL)
	{
		new_nodes->left = parent->left;
		/*update parent of the existing left child to point to the new nodes*/
		 parent->left->parent = new_nodes;
	}

	parent->left = new_nodes;
	return (new_nodes);


}

