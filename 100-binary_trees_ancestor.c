#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes,
 *or NULL if no common ancestor exists.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

/* Climb up the tree to find a common ancestor */
	while (first)
	{
		const binary_tree_t *temp = second;

		while (temp)
		{
			if (first == temp)
				return ((binary_tree_t *)first);

			temp = temp->parent;
		}

		first = first->parent;
	}

	return (NULL);
}
