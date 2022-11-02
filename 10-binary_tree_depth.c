#include "binary_trees.h"

/**
* binary_tree_depth - finds the depth of a node
* @tree: node
* Return: depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t t = 0;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	t = binary_tree_depth(tree->parent);
	return (t + 1);
}
