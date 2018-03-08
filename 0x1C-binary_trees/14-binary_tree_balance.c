#include "binary_trees.h"
int binary_tree_balance_helper(const binary_tree_t *tree);

/**
 * binary_tree_balance - check if tree is balanced
 * @tree: pointer to tree
 * Return: 0 if balanced otherwise number of nodes greater or less
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal;

	if (!tree)
		return (0);

	bal = binary_tree_balance_helper(tree->left);
	bal -= binary_tree_balance_helper(tree->right);

	return (bal);
}

/**
 * binary_tree_balance_helper - find height of a binary tree
 * @tree: pointer to tree
 * Return: The height of the tree or 0 if the tree is NULL
 */
int binary_tree_balance_helper(const binary_tree_t *tree)
{
	int left_height = 1, right_height = 1;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		left_height = 1 + binary_tree_balance_helper(tree->left);
	if (tree->right != NULL)
		right_height = 1 + binary_tree_balance_helper(tree->right);
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
