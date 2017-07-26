#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not full or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int check;

	if (tree == NULL)
		return (0);

	check = check_children(tree);

	return (check);
}

/**
 * check_children - checks if a node has two children
 * @node: pointer to the node to check
 * Return: 1 if node has two children, 0 if not
 */
int check_children(const binary_tree_t *node)
{
	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
		return (1);

	if (node->left != NULL && node->right != NULL)
		return (check_children(node->left) &&
			check_children(node->right));

	return (0);
}
