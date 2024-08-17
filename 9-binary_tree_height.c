#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
    {
        return (0);
    }

    left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
    right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

    func(tree->n);

}
