#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

void binary_tree_print(const binary_tree_t *);

/**
 * *binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: no sibling, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/**
 * *binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: 1 if node is a root, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree);

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 1 if node is a root, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 1 if node is a root, otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_depth -  function that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 1 if node is a root, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 1 if node is a root, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree);


/**
 * binary_tree_balance - function that measures the balance factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure the balance factor
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_postorder - function that goes through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func:  a pointer to a function to call for each node
 *
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_inorder -  function that goes through a 
 * binary tree using in-order traversal
 * tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func:  a pointer to a function to call for each node
 *
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_preorder -  function that goes through a binary
 * tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func:  a pointer to a function to call for each node
 *
 * Return: 1 if node is a root, otherwise 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_is_root -  function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node);

/**
 * binary_tree_is_leaf -  function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
void binary_tree_delete(binary_tree_t *tree);

/**
 * binary_tree_insert_right - function that inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value:  value to store in the new node
 *
 * return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/**
 * binary_tree_node -  function that creates a binary tree node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
 * _putchar - to print
 * @c: get the character
 * Return: nothing.
 */
int _putchar(char c); /**this is for putchar*/

#endif /* BINARY_TREES_H */
