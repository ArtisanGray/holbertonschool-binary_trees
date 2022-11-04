#include "binary_trees.h"

/**
 * tree_height - measures height of binary tree
 * @tree: root node
 * Return: height
 */

int tree_height(const binary_tree_t *tree)
{
	int h1 = 0, h2 = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	h1 = tree_height(tree->left);
	h2 = tree_height(tree->right);

	if (h1 > h2)
		return (h1 + 1);
	else
		return (h2 + 1);
}

/**
 * is_perfect - checks if binary tree is perfect
 * @tree: root node
 * @height: height
 * @level: current level
 * Return: 1 if perfect, 0 otherwise
 */

int is_perfect(const binary_tree_t *tree, int height, int level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
	{
		if (height == level)
			return (1);
		else
			return (0);
	}

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, height, level + 1) &&
		is_perfect(tree->right, height, level + 1));
}


/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: root node
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;

	if (!tree)
		return (0);

	height = tree_height(tree);
	return (is_perfect(tree, height, 0));
}
