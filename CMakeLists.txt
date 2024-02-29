cmake_minimum_required(VERSION 3.27)
project(binary_trees C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(binary_trees
        0-binary_tree_node.c
        1-binary_tree_insert_left.c
        10-binary_tree_depth.c
        11-binary_tree_size.c
        13-binary_tree_nodes.c
        15-binary_tree_is_full.c
        17-binary_tree_sibling.c
        2-binary_tree_insert_right.c
        3-binary_tree_delete.c
        4-binary_tree_is_leaf.c
        5-binary_tree_is_root.c
        6-binary_tree_preorder.c
        7-binary_tree_inorder.c
        8-binary_tree_postorder.c
        9-binary_tree_height.c
        binary_tree.h)
