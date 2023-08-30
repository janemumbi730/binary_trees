#include "binary_trees.h"
/**
 * binary_tree_sibling - gets sibling of node in b tree
 * @node: sibling finder node
 * Return: sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->n < node->parent->n)

		return (node->parent->right);
	return (node->parent->left);
}
