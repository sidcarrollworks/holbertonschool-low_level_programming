#include "binary_trees.h"

/**
 * binary_tree_nodes - count # of nodes with at least 1 child
 * @tree: pointer to tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int leaf = 0;

	if (!tree)
		return (0);

	leaf += binary_tree_nodes(tree->left);
	leaf += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		leaf++;
	return (leaf);
}
