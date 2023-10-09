#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Check node leaf or not
 * @node: node to check
 * Afua task
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
