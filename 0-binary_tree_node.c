#include "binary_trees.h"


/**
 * binary_tree_node - Creates nodes of a binary tree
 * @parent: The parent of the new node to create
 * @value: value to store in the node of the binary tree
 *
 * Return: Returns the newly created node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;


	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
