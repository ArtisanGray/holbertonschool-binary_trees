#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of binary tree
 * @tree: root node
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (d);

	while (tree->parent)
	{
		d++;
		tree = tree->parent;
	}
	return (d);
}
