#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root -  function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	/* It is the only node in the tree with no parent*/
	/**
	 *  Every other node in the tree is a child,
	 * directly or indirectly, of the root
	 */

	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
