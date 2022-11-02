#include "binary_trees.h"

/**
* binary_tree_nodes - counts ammount of nodes with at least one child
* @tree: tree
* Return: nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	else
		return (0);
}
