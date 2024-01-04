#include "binary_trees.h"

/**
 * binary_tree_insert_rightt - inserts a node as the right child of another node
 * @parent: A pointer to the node to insert the right child in
 * @value: value to store the new node
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the creates node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
