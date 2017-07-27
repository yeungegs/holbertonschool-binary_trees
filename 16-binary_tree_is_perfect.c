#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_sub;
	int right_sub;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	left_sub = binary_tree_is_perfect(tree->left);
	right_sub = binary_tree_is_perfect(tree->right);

	if (left_sub == 0 && right_sub == 0)
		return (0);
	else if (left_sub == right_sub)
		return (1);
	else
		return (0);
}
