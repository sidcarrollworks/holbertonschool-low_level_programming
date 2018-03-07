#include "binary_trees.h"

/**
 * binary_tree_inorder - list nodes in order
 * @tree: pointer to tree
 * @func: print func
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
