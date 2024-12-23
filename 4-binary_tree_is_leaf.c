#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, otherwise 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
/* Check if the node is NULL */
	if (node == NULL)
		return (0);

/* A leaf node has no left or right children */
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
