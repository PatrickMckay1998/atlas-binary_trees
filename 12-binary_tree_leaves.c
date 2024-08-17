#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)\
{
    if (tree == NULL)
    {
        return (0);
    }
    /* A leaf is a node with no children */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* Recursively count the leaves in the left and right subtrees */
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}