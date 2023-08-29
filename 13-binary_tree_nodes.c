#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with < 1 child in b tree
 * @tree: root node
 * Return: nodes with < 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	a = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);
	return (a + b + 1);
}
