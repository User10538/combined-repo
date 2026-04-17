#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder -  function that goes through a binary
 * tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func:  a pointer to a function to call for each node
 *
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	/* traversal is Root -> Left -> Right*/
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

