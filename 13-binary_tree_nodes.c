size_t binary_tree_nodes(const binary_tree_t *tree) {
  if (tree == NULL) {
    return 0; // Base case: empty tree
  }

  size_t nodes = 0; // Initialize counter for nodes with children

  // Check left child
  if (tree->left) {
    nodes++; // Node has at least one child
    nodes += binary_tree_nodes(tree->left); // Recursively count in left subtree
  }

  // Check right child
  if (tree->right) {
    nodes++; // Node has at least one child
    nodes += binary_tree_nodes(tree->right); // Recursively count in right subtree
  }

  return nodes;
}
