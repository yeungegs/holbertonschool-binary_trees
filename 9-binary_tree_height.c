#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: height of tree, if tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_height = binary_tree_height(tree->left) + 1;
	r_height = binary_tree_height(tree->right) + 1;

	if (l_height > r_height)
		return (l_height);
	else
		return (r_height);
}
