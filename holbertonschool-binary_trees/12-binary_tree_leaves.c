#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 1 if node is a root, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1); /* it's a leaf*/

	/* use recursive to count leaves in both left and right subtrees*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
