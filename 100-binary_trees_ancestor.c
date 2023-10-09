#include "binary_trees.h"
/**
 * binary_trees_ancestor - Find the low common an ancestor
 * @first: node
 * @second:node
 *
 * By Afua
 * Return: pointer or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	binary_tree_t *node;

	if (first == NULL || second == NULL)
		return (NULL);
	node = (binary_tree_t *)second;
	while (first != NULL)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = node;
		first = first->parent;
	}
	return (NULL);
}
