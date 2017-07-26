#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to the node to measure the depth of
 * Return: depth of the node or 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL || node->parent == NULL)
		return (0);

	depth = measure_depth(node);

	return (depth);
}

/**
 * measure_depth - measures the depth of a node in a binary tree recursively
 * @node: pointer to the node to measure the depth of
 * Return: depth of the node or 0 if node is NULL
 */
size_t measure_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL || node->parent == NULL)
		return (0);

	depth = measure_depth(node->parent);

	return (depth + 1);
}
