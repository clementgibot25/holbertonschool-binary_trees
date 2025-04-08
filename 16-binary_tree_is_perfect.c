#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"
#include "15-binary_tree_is_full.c"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int height, leaves;

    if (tree == NULL)
        return (0);

    height = binary_tree_height(tree);
    leaves = binary_tree_leaves(tree);

    return (binary_tree_is_full(tree) && (leaves == (1 << height)));
}
