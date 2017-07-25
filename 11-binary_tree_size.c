#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = measure_size(tree);

	return (count);
}

/**
 * measure_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: size of tree
 */
size_t measure_size(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;
	size_t count;

	if (tree == NULL)
		return (0);

	left_count = measure_size(tree->left);
	right_count = measure_size(tree->right);

	count = left_count + right_count;

	return (count + 1);
}
