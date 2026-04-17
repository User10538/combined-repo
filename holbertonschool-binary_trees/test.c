#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure the balance factor
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	int left_l = 0, left_r = 0;
	int right_l = 0, right_r = 0;
	const binary_tree_t *left;
	const binary_tree_t *right;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		left = tree->left;
		if (left->left)
			left_l  = 1 + binary_tree_balance(left->left);
		if (left->right)
			left_r  = 1 + binary_tree_balance(left->right);
		left_height = (left_l  > left_r ? left_l  : left_r) + 1;
	}
	if (tree->right)
	{
		right = tree->right;
		if (right->left)
			right_l = 1 + binary_tree_balance(right->left);
		if (right->right)
			right_r = 1 + binary_tree_balance(right->right);
		right_height = (right_l > right_r ? right_l : right_r) + 1;
	}
	return (left_height - right_height);
}



