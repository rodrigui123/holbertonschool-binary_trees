#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: node to check
 * Return:1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
