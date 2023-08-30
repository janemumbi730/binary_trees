#include "binary_trees.h"
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
