#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts left node on binary tree
* @parent: parent node
* @value: value to initialize node with
*
* Return: returns pointer to node, NULL otherwise
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = new;
		new->left = parent->left;
	}
	new->parent = parent;
	parent->left = new;
	return (new);
}
