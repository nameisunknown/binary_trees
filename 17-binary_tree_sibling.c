#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Is a pointer to the node to find the sibling
 * Return: A pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == NULL || parent->right == NULL)
		return (NULL);

	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
