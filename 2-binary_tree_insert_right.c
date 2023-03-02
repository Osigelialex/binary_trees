#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;

	return (new_node);
}
