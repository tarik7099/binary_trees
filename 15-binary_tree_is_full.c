int binary_tree_is_full(const binary_tree_t *tree) {
  if (tree == NULL) {
    return 0; // Base case: empty tree
  }

  // Check children
  if (tree->left == NULL && tree->right == NULL) {
    return 1; // Leaf node, considered full
  } else if (tree->left == NULL || tree->right == NULL) {
    return 0; // Node with only one child, not full
  }

  // Recursive check for subtrees
  return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
}
