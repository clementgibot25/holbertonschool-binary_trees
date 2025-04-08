#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @tree: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (NULL);

	if (tree->parent->left == tree)
		return (tree->parent->right);

	if (tree->parent->right == tree)
		return (tree->parent->left);

	return (NULL);
}
