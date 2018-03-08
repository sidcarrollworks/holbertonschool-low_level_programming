#include "binary_trees.h"

/**
 * binary_tree_balance - check if tree is balanced
 * @tree: pointer to tree
 * Return: 0 if balanced otherwise number of nodes greater or less
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_l;
	int bal_r;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (0);

	bal_l = binary_tree_balance(tree->left);
	bal_r = binary_tree_balance(tree->right);

	if (tree->right)
		bal_r++;
	if (tree->left)
		bal_l++;

	return (bal_l - bal_r);
}
