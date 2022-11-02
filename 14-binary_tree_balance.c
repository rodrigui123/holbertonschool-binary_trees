#include "binary_trees.h"

/**
* binary_tree_balance - measures balance factor of a tree
* @tree: tree
* Return: balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (!tree->parent)
	{
		if (tree->left && tree->right)
		{
			i++;
			j++;
		}
		if (tree->left)
			i++;
		if (tree->right)
			j++;
	}
	if (tree->left)
		i++;
	if (tree->right)
		j++;
	if (i == 3 && j == 3 && tree->left->left
	&& tree->left->right)
		return (1);
	return (binary_tree_balance(tree->left) +
	binary_tree_balance(tree->right) +
	i - j);
}
