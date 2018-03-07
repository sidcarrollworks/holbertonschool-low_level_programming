#include "binary_trees.h"

/**
 * binary_tree_is_root - check if current node is a root
 * @node: check node
 * Return: 1 if root 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);
	else if (!node)
		return (0);
	else
		return (0);
}
