#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	left_height = measure_height(tree->left);
	right_height = measure_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (check_children(tree) == 1)
		return (1);
	else
		return (0);
}

/**
 * measure_height - measures height of a binary tree recursively
 * @tree: pointer to the root of the tree to measure
 * Return: height
 */
size_t measure_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = measure_height(tree->left);
	right_height = measure_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * check_children - checks if a node has two children
 * @node: pointer to the node to check
 * Return: 1 if node has two children, 0 if not
 */
int check_children(const binary_tree_t *node)
{
	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
		return (1);

	if (node->left != NULL && node->right != NULL)
		return (check_children(node->left) &&
			check_children(node->right));

	return (0);
}
