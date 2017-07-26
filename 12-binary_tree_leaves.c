#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves in
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = count_leaves(tree);

	return (count);
}

/**
 * count_leaves - counts the leaves in a binary tree recursively
 * @tree: pointer to the root node of the tree to be measured
 * Return: number of leaves
 */
size_t count_leaves(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;
	size_t count;

	if (tree == NULL)
		return (0);

	left_count = count_leaves(tree->left);
	right_count = count_leaves(tree->right);

	count = left_count + right_count;

	if (tree->left == NULL && tree->right == NULL)
		return (count + 1);
	else
		return (count);
}
