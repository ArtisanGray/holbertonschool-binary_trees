#include "binary_trees.h"
/**
* binary_tree_nodes - counts the parents in tree
* @tree: root node
*
* Return: count, 0 on null or fail
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	else
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
