#include "binary_trees.h"
/**
* binary_tree_is_full - checks if binary tree full
* @tree: - root node
*
* Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lh = binary_tree_is_full(tree->left);

	if (tree->right)
		rh = binary_tree_is_full(tree->right);

	if (lh - rh != 0)
		return (0);
	return (1);
}
