#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }

    /* A leaf node is full */
    if (tree->left == NULL && tree->right == NULL)
    {
        return (1);
    }

    /* Check if both left and right children exist */
    if (tree->left != NULL && tree->right != NULL)
    {
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
    }
    
    /* If one child is missing, the tree is not full */
    return (0);
}