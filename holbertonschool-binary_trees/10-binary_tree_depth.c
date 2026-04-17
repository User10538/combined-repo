#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_depth -  function that measures the
 * depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 1 if node is a root, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*The number of edges from the node up to the root of the tree.*/
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
