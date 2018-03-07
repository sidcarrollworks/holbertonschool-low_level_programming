#include "binary_trees.h"

/**
 * binary_tree_uncle - get nodes uncle
 * @node: current node
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gprnt = node->parent->parent;

	if (!node || !node->parent || !gprnt)
		return (NULL);

	if (gprnt->left == node->parent)
		return (gprnt->right);
	else
		return (gprnt->left);
}
