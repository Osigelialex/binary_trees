#include "binary_trees.h"

/**
 * binary_tree_insert - Inserts a node as the right-child
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL || parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}