#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: binary tree
 * Return: return 1 if perfect or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	if (binary_tree_is_full(tree) && right == left)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to tree
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (!tree)
		return (0);

	if (tree->left)
		full = binary_tree_is_full(tree->left);
	if (tree->right)
		full = binary_tree_is_full(tree->right);

	if ((!tree->right && tree->left) || (!tree->left && tree->right))
		full = 0;
	return (full);
}

/**
 * binary_tree_size - get size of binary tree
 * @tree: pointer to tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
