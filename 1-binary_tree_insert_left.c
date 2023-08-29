#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node as the left child
 * @parent: pointer to the parent node
 * @value: to store in the new node
 * Return: created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *a;

	if (parent == NULL)
		return (NULL);

	a = binary_tree_node(parent, value);

	if (a == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		a->left = parent->left;
		a->left->parent = a;
	}

	parent->left = a;
	return (a);
}
