#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */
int binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}
