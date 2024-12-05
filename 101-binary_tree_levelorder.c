#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * level_order - Traverses a given level of the binary tree.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * @level: Level of the tree to traverse.
*/
void level_order(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (!tree || !func)
		return;

	if (level == 0)
		func(tree->n);
	else
	{
		level_order(tree->left, func, level - 1);
		level_order(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder Goes thrgh binary tree usng level-order travsal.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, level;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);
	for (level = 0; level < height; level++)
		level_order(tree, func, level);
}
