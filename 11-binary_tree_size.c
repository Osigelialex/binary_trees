#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left = binary_tree_size(tree->left);
	size_t right = binary_tree_size(tree->right);

	return ((left + right) + 1);
}