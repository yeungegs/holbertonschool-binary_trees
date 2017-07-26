#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes in
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = count_nodes(tree);

	return (count);
}

/**
 * count_nodes - counts the nodes with at least 1 child in a
 * binary tree recursively
 * @tree: pointer to the root node of the tree to count the nodes in
 * Return: number of nodes with at least 1 child
 */
size_t count_nodes(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;
	size_t count;

	if (tree == NULL)
		return (0);

	left_count = count_nodes(tree->left);
	right_count = count_nodes(tree->right);

	count = left_count + right_count;

	if (tree->left != NULL || tree->right != NULL)
		return (count + 1);
	else
		return (count);
}
