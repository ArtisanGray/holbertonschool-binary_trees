#include "binary_trees.h"
/**
* binary_tree_is_root - checks if a node is root of tree
* @node: given node of tree
*
* Return: 1 on success, 0 otherwise or if null
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
