#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * *binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: no sibling, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	else
		return (node->parent->parent->left);

}
