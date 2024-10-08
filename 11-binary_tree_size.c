#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    /* The size is the number of nodes in the tree */
    return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}