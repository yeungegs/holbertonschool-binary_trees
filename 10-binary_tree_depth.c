#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to measure the depth of
 * Return: depth of a given node, if node is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (0);

	return (binary_tree_depth(node->parent) + 1);
}
