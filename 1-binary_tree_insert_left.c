#include "binary_trees.h"

/*
 * binary_tree_insert_left - inserts a node as the left-child
 *
 * @parent: parent is a pointer to the node to insert
 * @value: value to store in the new node
 *
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;
	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
