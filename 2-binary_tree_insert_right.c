#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(NULL, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
