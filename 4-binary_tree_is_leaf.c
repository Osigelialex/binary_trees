#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: pointer to the node to check
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == null)       
        return false;
    if (node.left == null && node.right == null)      
        return true; 
    isLeaf(node.left); 
    isLeaf(node.right);      
}

return (isLeaf(node.left, data) || isLeaf(node.right, data));


boolean isLeaf(BTNode node, int data) {
    if (node == null)
        return false;    
    if (node.right == null && node.left == null)
        return true;
    return false; 
}

