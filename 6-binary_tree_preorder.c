#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL)
    {
        return;
    }

    func(tree->n);
    /* Process the current node */

    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
    /* recursivle go through the left and right sub trees */


}