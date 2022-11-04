#include "binary_trees.h"
/**
* binary_tree_sibling - checks if given node has sibling
* @node: root node
*
* Return: node or NULL on fail
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left || node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
