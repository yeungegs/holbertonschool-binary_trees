#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;

	if (parent->left == NULL)
	{
		new->left = NULL;
		new->right = NULL;
		parent->left = new;
	}
	else
	{
		new->left = parent->left;
		new->right = NULL;
		parent->left = new;
		new->left->parent = new;
	}

	return (new);
}
