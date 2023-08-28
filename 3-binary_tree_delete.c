#include "binary_trees.h"
/**
 * binary_tree_delete - clears the whole binary tree
 * @tree: root node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *lft_child;
	binary_tree_t *rght_child;

	if (tree != NULL)
	{
		lft_child = tree->left;
		rght_child = tree->right;

		if (lft_child != NULL)
		{
			binary_tree_delete(lft_child);
		}

		if (rght_child != NULL)
		{
			binary_tree_delete(rght_child);
		}
		free(tree);
	}
}
