#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves in
 * a NULL pointer is not a leaf
 * Return: number of leaves in a tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	
	l_height = binary_tree_leaves(tree->left);
	r_height = binary_tree_leaves(tree->right);

	return (r_height + l_height);
}
