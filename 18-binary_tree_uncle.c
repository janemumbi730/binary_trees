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

/**
 * binary_tree_uncle - gets uncle of node in b tree
 * @node: uncle finder node
 * Return: uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
