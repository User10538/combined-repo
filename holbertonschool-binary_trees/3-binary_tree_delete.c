#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * return: pointer to the created node, or NULL on failure or if parent is NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* delete left and right subtrees recursively*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/**need to remb to free the tree*/
	free(tree);
}

