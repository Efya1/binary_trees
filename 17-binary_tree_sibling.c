#include "binary_trees.h"
/**
 * binary_tree_sibling - Return sibling of a node
 * @node: Node of a tree
 * By Afua
 *
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->right);
}
