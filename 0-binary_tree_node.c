#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node pointer
 * @value: value to initialize node with
 * Return: pointer to new node, NULL otherwise
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (!new_tree)
		return (NULL);

	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);
}
