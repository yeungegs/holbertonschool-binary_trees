#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to measure the depth of
 * Return: depth of a given node, if node is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t l_height = 0;
	size_t r_height = 0;
	
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (0);
	
	l_height = binary_tree_depth(node->left) - 1;
	r_height = binary_tree_depth(node->right) - 1;

	if (l_height > r_height)
		return (l_height);
	else
		return (r_height);
}

