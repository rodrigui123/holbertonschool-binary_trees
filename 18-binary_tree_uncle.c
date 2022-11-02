#include "binary_trees.h"

/**
* binary_tree_sibling - finds sibling of a node
* @node: node to check
* Return: sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
	return (NULL);
}

/**
* binary_tree_uncle - finds uncle of a node
* @node: node to check
* Return: uncle node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
