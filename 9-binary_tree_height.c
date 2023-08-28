#include "binary_trees.h"
/**
 * binary_tree_height - measures height of b tree
 * @tree: root node
 * Return: height of b tree 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
		a = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		b = 1 + binary_tree_height(tree->right);

	return ((a > b) ? (a) : (b));
}
