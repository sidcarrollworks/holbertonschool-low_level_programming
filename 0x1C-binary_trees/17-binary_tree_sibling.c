#include "binary_trees.h"

/**
 * binary_tree_sibling - get node sibling
 * @node: current node
 * Return: node's sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (prnt->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
