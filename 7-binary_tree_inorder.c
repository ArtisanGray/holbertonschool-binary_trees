#include "binary_trees.h"
/**
* binary_tree_inorder - inorder traversal of binary tree
* @tree: root node
* @func: function to pass arguments through recursive step
*
* Return: none
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
