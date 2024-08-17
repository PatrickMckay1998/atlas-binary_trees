#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }
    /* Check if the current node is the left child */
    if (node->parent->left == node)
    {
        return (node->parent->right);
    }
    /* Check if the current node is the right child */
    if (node->parent->right == node)
    {
        return (node->parent->left);
    }
    /* If the node has no sibling */
    return (NULL);
}

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
    {
        return (NULL);
    }
    /* Find the uncle by finding the sibling of the parent */
    return (binary_tree_sibling(node->parent));
}