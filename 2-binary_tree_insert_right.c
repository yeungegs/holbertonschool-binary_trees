#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent - pointer to the node to insert the right-child in
 * @value - value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;

	temp = parent->right;
	parent->right = new;

	if (temp != NULL)
	{
		new->right = temp;
		temp->parent = new;
	}
	else
		new->right = NULL;

	return (new);
}
