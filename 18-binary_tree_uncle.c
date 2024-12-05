#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node, or NULL if there is no uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/** Check if the node or its parent is NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

/** Check if the node's parent is the left child of the grandparent */
	if (node->parent == node->parent->parent->left)
/** Return the right child of the grandparent (the uncle) */
		return (node->parent->parent->right);

/** Otherwise, return the left child of the grandparent (the uncle) */
	return (node->parent->parent->left);
}
