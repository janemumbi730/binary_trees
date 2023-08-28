#include "binary_trees.h"
/**
 * binary_tree_node - makes new binary tree node
 * @parent: parent node
 * @value: new node
 * Return: created node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *a;

	a = malloc(sizeof(binary_tree_t));

	if (a == NULL)
	{
		return (NULL);
	}

	a->parent = parent;
	a->left = NULL;
	a->right = NULL;
	a->n = value;

	return (a);
}
