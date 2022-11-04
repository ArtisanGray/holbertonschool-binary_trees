#include "binary_trees.h"

/**
 * height - measures height of tree
 * @tree: root node
 * Return: height
 */

int height(binary_tree_t *tree)
{
	int h1 = 0, h2 = 0;

	if (!tree)
		return (0);

	h1 = height(tree->left);
	h2 = height(tree->right);

	if (h1 > h2)
		return (h1 + 1);
	else
		return (h2 + 1);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node
 * Return: factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	lh = height(tree->left);
	rh = height(tree->right);

	return (lh - rh);
}
