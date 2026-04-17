#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*Leaf is if a node does not have any left or right child*/

	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);
}
