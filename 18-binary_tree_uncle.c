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

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);

}

/**
 * binary_tree_uncle - gets uncle of node in b tree
 * @node: uncle finder node
 * Return: uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = binary_tree_sibling(node->parent);

	if (node == NULL)
		return (NULL);

	return (uncle);

}
