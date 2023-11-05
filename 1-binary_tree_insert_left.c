#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node at the left of the parent
 * @parent: parent to insert the node at its left
 * @value: the value of the new node
 *
 * Return: returns new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new  = binary_tree_node(parent, value);
	if (parent == NULL || new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left  = new;
	return (new);
}
