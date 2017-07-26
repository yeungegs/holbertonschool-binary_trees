#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size of
 * Return: size of a given binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size;

	tree_size = 0;
	if (tree == NULL)
		return (0);

	tree_size = binary_tree_size(tree->left) + 1;
	tree_size = binary_tree_size(tree->right) + 1;

	return (tree_size);
}
