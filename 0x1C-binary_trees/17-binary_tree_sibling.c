#include "binary_trees.h"

/**
 * binary_tree_sibling - get node sibling
 * @node: current node
 * Return: node's sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *prnt = node->parent;

	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (prnt->left == node)
		return (prnt->right);
	else
		return (prnt->left);
}
