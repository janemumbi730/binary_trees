#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts new node right child
 * @parent: parent node
 * @value: to store in the new node
 * Return: created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *a;

	if (parent == NULL)
	{
		return (NULL);
	}

	a = binary_tree_node(parent, value);

	if (a == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		a->right = parent->right;
		a->right->parent = parent->right;
	}

	parent->right = a;
	return (a);
}
