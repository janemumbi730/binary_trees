#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of node in b tree
 * @tree: node to measure depth
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int a;

	if (tree == NULL)
	{
		return (0);
	}

	for (a = 0; tree && tree->parent; a++)
	{
		tree = tree->parent;
	}
	return (a);
}
