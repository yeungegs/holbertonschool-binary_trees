#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	int size;
	int perfect_number;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	height = measure_height(tree);
	size = measure_size(tree);

	perfect_number = my_pow(2, height) - 1;

	if (size == perfect_number)
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
 * measure_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to be measured
 * Return: size of tree
 */
size_t measure_size(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;
	size_t count;

	if (tree == NULL)
		return (0);

	left_count = measure_size(tree->left);
	right_count = measure_size(tree->right);

	count = left_count + right_count;

	return (count + 1);
}

/**
 * my_pow - returns the value of x raised to the power of y
 * @x: initial value
 * @y: exponent
 * Return: value of x raised to power of y or -1 if y is lower than 0
 */
int my_pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * my_pow(x, y - 1));
}
