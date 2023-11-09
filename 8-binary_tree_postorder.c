#include "binary_trees.h"

/**
 * binary_tree_postorder - cycles  values of binary tree in post-order
 * @tree: the root of the binary tree
 * @func: a pointer to function to call for each value in tree
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
