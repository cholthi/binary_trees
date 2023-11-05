#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node at the right of the parent
 * @parent: parent to insert the node at its left
 * @value: the value of the new node
 *
 * Return: returns new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new  = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right  = new;
	return (new);
}
