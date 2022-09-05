#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: tree to check
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right || !tree->left)
		return (0);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
	return (1);
}
