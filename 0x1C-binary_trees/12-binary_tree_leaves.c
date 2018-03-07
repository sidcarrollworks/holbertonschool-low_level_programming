#include "binary_trees.h"

/**
 * binary_tree_leaves - find number of leaves
 * @tree: pointer to tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaf = 0;

	if (!tree)
		return (0);

	leaf += binary_tree_leaves(tree->left);
	leaf += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		leaf++;
	return (leaf);
}
