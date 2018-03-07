#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node right
 * @parent: parent node
 * @value: vale of created node
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	new_node = binary_tree_node(new_node, value);
	if (!new_node)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		tmp = parent->right;
		parent->right = new_node;
		new_node->right = tmp;
		tmp->parent = new_node;
	}

	new_node->parent = parent;

	return (new_node);
}
