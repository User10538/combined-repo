#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *temp, *stack[1024], *node;
	int depth = 0, level = 0, top = -1, levels[1024];

	if (tree == NULL)
		return (0);
	temp = tree;
	while (temp)
	{
		depth++;
		temp = temp->left;
	}
	stack[++top] = tree;
	levels[top] = 0;
	while (top >= 0)
	{
		node = stack[top];
		level = levels[top--];
		if (!node->left && !node->right)
		{
			if (level + 1 != depth)
				return (0);
		}
		else if (!node->left || !node->right)
		{
			return (0);
		}
		else
		{
			stack[++top] = node->right;
			levels[top] = level + 1;
			stack[++top] = node->left;
			levels[top] = level + 1;
		}
	}
	return (1);
}

