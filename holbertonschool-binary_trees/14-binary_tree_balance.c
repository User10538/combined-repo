#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of the tree
 */
int tree_height(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? tree_height(tree->left) : 0;
	right_height = tree->right ? tree_height(tree->right) : 0;

	return (left_height - right_height);
}

