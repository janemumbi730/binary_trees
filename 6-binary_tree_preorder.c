#include "binary_trees.h"
/**
 * binary_tree_preorder - does preorder traversal b tree
 * @tree: root node
 * @func: call for each node function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}


	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
