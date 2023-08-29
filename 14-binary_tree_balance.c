#include "binary_trees.h"
/**
 * tranverse_rows - gets rows of b tree
 * @tree: root node
 * Return: rows or 0 if tree is NULL
 */

size_t tranverse_rows(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
	{
		return (-1);
	}

	if (tree->left != NULL)
		a = 1 + tranverse_rows(tree->left);

	if (tree->right != NULL)
		b = 1 + tranverse_rows(tree->right);

	return ((a > b) ? (a) : (b));
}

/**
 * binary_tree_balance - gets the balance factor of b tree
 * @tree: root node
 * Return: balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	return ((int)tranverse_rows
	(tree->left) - (int)tranverse_rows(tree->right));
}

