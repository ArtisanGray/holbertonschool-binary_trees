#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal of binary tree
 * @tree: root node
 * @func: pass of arguments for recursive step
 * Return: none
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
