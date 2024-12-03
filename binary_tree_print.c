#include "binary_trees.h"

/**
 * print_spaces - Prints spaces for tree formatting
 * @n: Number of spaces to print
*/
static void print_spaces(int n)
{
	while (n--)
		printf(" ");
}

/**
 * print_tree - Prints a tree structure
 * @tree: Pointer to the root node of the tree to print
 * @level: Current level in the tree (used for formatting)
 * @is_left: Flag indicating if the node is a left child
*/
static void print_tree(const binary_tree_t *tree, int level, int is_left)
{
	if (tree == NULL)
		return;

	print_spaces(level);
	if (is_left)
		printf("L---");
	else
		printf("R---");

	printf("%d\n", tree->n);

	print_tree(tree->left, level + 4, 1);
	print_tree(tree->right, level + 4, 0);
}

/**
 * binary_tree_print - Prints a binary tree in a pretty format
 * @tree: Pointer to the root node of the tree to print
*/
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	print_tree(tree, 0, 0);
}
