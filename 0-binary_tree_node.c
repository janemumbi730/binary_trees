#include "binary_trees.h"
/**
 * binary_tree_node - makes new binary tree node
 * @parent: parent node
 * @value: new node
 * Return: created node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = malloc(sizeof(binary_tree_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;
	n_node->n = value;

	return (n_node);
}
