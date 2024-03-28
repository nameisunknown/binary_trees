#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array
 * @array: Is a pointer to the first element of the array to be converted
 * @size: Is the size of the array
 * Return: a pointer to the root node of the created BST, or NULL on failure
*/

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
