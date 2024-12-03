#include "binary_trees.h"

/* Helper function to print spaces */
static void print_spaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
        putchar(' ');
}

/* Helper function to print binary tree recursively */
static void print_tree(const binary_tree_t *tree, int depth)
{
    if (tree == NULL)
        return;

    if (tree->right != NULL)
        print_tree(tree->right, depth + 1);

    print_spaces(depth * 8);
    printf("(%03d)\n", tree->n);

    if (tree->left != NULL)
        print_tree(tree->left, depth + 1);
}

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
*/
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    print_tree(tree, 0);
}
