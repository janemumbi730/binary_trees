#include "binary_trees.h"
/**
 * binary_tree_size - measures size of b tree
 * @tree: root node
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
	{
		return (0);
	}

	x = 1 + binary_tree_size(tree->left) +
	binary_tree_size(tree->right);

	return (x);
}
