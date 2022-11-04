#include "binary_trees.h"
/**
* binary_tree_size - measures size of binary tree
* @tree: root node
*
* Return: length on success, 0 if null or fail
*/
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (1 + ((binary_tree_size(tree->left) + binary_tree_size(tree->right))));
}

