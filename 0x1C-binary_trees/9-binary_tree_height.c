#include "binary_trees.h"

/**
 * binary_tree_height - find height of tree
 * @tree: pointer to tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lhi = 0;
	size_t Rhi = 0;

	if (!tree)
		return (0);

	Lhi = binary_tree_height(tree->left);
	Rhi = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		Lhi--, Rhi--;

	if (Lhi > Rhi)
		return (Lhi + 1);
	else
		return (Rhi + 1);
}
