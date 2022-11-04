#include "binary_trees.h"
/**
* binary_tree_height - measures height of binary tree
* @tree: root node
*
* Return: height of tree, 0 on null or fail
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h1 = 0, h2 = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	h1 = binary_tree_height(tree->left);
	h2 = binary_tree_height(tree->right);

	if (h1 > h2)
		return (h1 + 1);
	else
		return (h2 + 1);
}
