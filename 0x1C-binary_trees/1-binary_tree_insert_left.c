#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node on the left side
 * @parent: node before
 * @value: value for node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(new_node, value);
	if (!new_node)
		return (NULL);

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		tmp->parent = new_node;
	}

	new_node->parent = parent;

	return (new_node);
}
