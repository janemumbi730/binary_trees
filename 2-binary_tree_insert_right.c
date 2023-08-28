#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts new node right child
 * @parent: parent node
 * @value: to store in the new node
 * Return: created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);

	if (n_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		n_node->right = parent->right;
		n_node->right->parent = parent->right;
	}

	parent->right = n_node;
	return (n_node);
}
