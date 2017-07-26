#include "binary_trees.h"

/**
 * binary_tree_height - measure height of binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 * Return: height of tree, if tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftsub = 0;
	int rightsub = 0;
	
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	
	leftsub += binary_tree_height(tree->left);
	rightsub += binary_tree_height(tree->right);

	if (leftsub > rightsub)
		return (leftsub);
	else
		return (rightsub);
}
