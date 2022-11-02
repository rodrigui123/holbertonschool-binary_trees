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
	if (!tree->right != !tree->left)
		return (0);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
	return (1);
}

/**
* binary_tree_size - size of a tree
* @tree: tree
* Return: size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}


/**
* binary_tree_is_perfect - checks if tree is perfect
* @tree: tree
* Return: 0 if not 1 if yes
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) == 1)
		if (binary_tree_size(tree->left) - binary_tree_size(tree->right) == 0)
			return (1);
	return (0);
}
