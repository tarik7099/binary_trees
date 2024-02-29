#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds if a node is sibling
 * @node: node to check
 * Return: The sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

if (!node || !node->parent)
{
return (NULL);
}

binary_tree_t *parent = node->parent;
if (parent->left == node)
{
return (parent->right);
}
else
{
return (parent->left);
}
}
