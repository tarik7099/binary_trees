binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
  if (!node || !node->parent) { // Check for NULL node or parent
    return NULL;
  }

  // Get the parent node
  binary_tree_t *parent = node->parent;

  // Check if the node is the left or right child
  if (parent->left == node) {
    return parent->right; // Sibling is the right child
  } else {
    return parent->left; // Sibling is the left child
  }
}
