#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in new node
 * Return: pointer to new node, otherwise return NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	new->parent = parent;
	parent->right = new;
	return (new);
}
