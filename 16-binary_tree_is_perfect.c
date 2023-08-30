#include "binary_trees.h"
/**
 * height_checker - checks height of b tree
 * @tree: root node
 * Return: height or 0 otherwise
 */

int height_checker(const binary_tree_t *tree)
{
	int a, b;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL)
	{
		if (tree->left == NULL)
			return (1);
		return (0);
	}

	if (tree->left == NULL)
		return (0);

	a = height_checker(tree->left);
	b = height_checker(tree->right);

	if (a == b)
		return (a + 1);
	return (0);
}

/**
 * binary_tree_is_perfect - sees if a binary tree is perfect
 * @tree: root node
 * Return: 1 if perfect or 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (height_checker(tree) == 0)
		return (0);
	return (1);
}
