#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree
 *
 * @parent: parent node of the node to create.
 * @value: value of the node to create.
 *
 * Retrun: binary_tree_t
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	new_node-> = value;

	return (new_node);
}
