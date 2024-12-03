#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as right-child of another node.
 * @parent: A pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

/* Create the new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

/* If parent already has right child, reassign it as right child of new node */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

/* Assign the new node as the right child of the parent */
	parent->right = new_node;

	return (new_node);
}
