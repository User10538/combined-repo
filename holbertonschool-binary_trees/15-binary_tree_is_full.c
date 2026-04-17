#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If the node is a leaf (no children), it is considered full */

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If the node has two children, recursively check both subtrees */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If the node has only one child, it is not full */
	return (0);
}
