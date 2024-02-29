#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_size, right_size;

    if (tree == NULL)
        return (0);

    /* Get the size of left and right subtrees */
    left_size = binary_tree_size(tree->left);
    right_size = binary_tree_size(tree->right);

    /* Return the sum of subtrees' sizes + 1 (for the current node) */
    return (left_size + right_size + 1);
}
