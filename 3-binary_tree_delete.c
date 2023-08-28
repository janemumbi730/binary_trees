#include "binary_trees.h"
/**
 * binary_tree_delete - clears the whole binary tree
 * @tree: root node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *a;
	binary_tree_t *b;

	if (tree != NULL)
	{
		a = tree->left;
		b = tree->right;

		if (a != NULL)
		{
			binary_tree_delete(a);
		}

		if (b != NULL)
		{
			binary_tree_delete(b);
		}
		free(tree);
	}
}
