#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL if it failed
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    if (node == NULL)
        return (NULL);

    node->n = value;
    node->left = NULL;
    node->right = NULL;
    node->parent = parent;

    return (node);
}
