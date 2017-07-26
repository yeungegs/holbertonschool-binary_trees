#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if given node is a root
 * a root node does not a parent node
 * @node: pointer to the node to check
 * Return: 1 if node is a root and 0 otherwise or if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
