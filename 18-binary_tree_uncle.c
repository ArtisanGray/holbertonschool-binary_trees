#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of a node
 * @node: node to unclefy
 * Return: pointer to uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);

		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
	}

	return (NULL);
}
