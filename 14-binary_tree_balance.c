#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    return (left_height > right_height ? left_height : right_height);
}

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }
    
    int left_height = tree->left ? (int)binary_tree_height(tree->left) : 0;
    int right_height = tree->right ? (int)binary_tree_height(tree->right) : 0;

    return (left_height - right_height);
}