#include "binary_trees.h"

/**
 * binary_tree_preorder - cycles  values of binary tree in preorder
 * @tree: the root of the binary tree
 * @func: a pointer to function to call for each value in tree
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
